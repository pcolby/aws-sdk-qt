// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMEDQUERYRESPONSE_H
#define QTAWS_DELETENAMEDQUERYRESPONSE_H

#include "athenaresponse.h"
#include "deletenamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class DeleteNamedQueryResponsePrivate;

class QTAWSATHENA_EXPORT DeleteNamedQueryResponse : public AthenaResponse {
    Q_OBJECT

public:
    DeleteNamedQueryResponse(const DeleteNamedQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNamedQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNamedQueryResponse)
    Q_DISABLE_COPY(DeleteNamedQueryResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
