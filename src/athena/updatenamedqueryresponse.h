// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMEDQUERYRESPONSE_H
#define QTAWS_UPDATENAMEDQUERYRESPONSE_H

#include "athenaresponse.h"
#include "updatenamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class UpdateNamedQueryResponsePrivate;

class QTAWSATHENA_EXPORT UpdateNamedQueryResponse : public AthenaResponse {
    Q_OBJECT

public:
    UpdateNamedQueryResponse(const UpdateNamedQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNamedQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNamedQueryResponse)
    Q_DISABLE_COPY(UpdateNamedQueryResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
