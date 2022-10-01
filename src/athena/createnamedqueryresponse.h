// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMEDQUERYRESPONSE_H
#define QTAWS_CREATENAMEDQUERYRESPONSE_H

#include "athenaresponse.h"
#include "createnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class CreateNamedQueryResponsePrivate;

class QTAWSATHENA_EXPORT CreateNamedQueryResponse : public AthenaResponse {
    Q_OBJECT

public:
    CreateNamedQueryResponse(const CreateNamedQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNamedQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNamedQueryResponse)
    Q_DISABLE_COPY(CreateNamedQueryResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
