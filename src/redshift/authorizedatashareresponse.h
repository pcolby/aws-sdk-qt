// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDATASHARERESPONSE_H
#define QTAWS_AUTHORIZEDATASHARERESPONSE_H

#include "redshiftresponse.h"
#include "authorizedatasharerequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeDataShareResponsePrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeDataShareResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AuthorizeDataShareResponse(const AuthorizeDataShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeDataShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeDataShareResponse)
    Q_DISABLE_COPY(AuthorizeDataShareResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
