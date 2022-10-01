// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEENDPOINTACCESSRESPONSE_H
#define QTAWS_AUTHORIZEENDPOINTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "authorizeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeEndpointAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeEndpointAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AuthorizeEndpointAccessResponse(const AuthorizeEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeEndpointAccessResponse)
    Q_DISABLE_COPY(AuthorizeEndpointAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
