// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_AUTHORIZEENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AuthorizeEndpointAccessResponse;

class AuthorizeEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AuthorizeEndpointAccessResponsePrivate(AuthorizeEndpointAccessResponse * const q);

    void parseAuthorizeEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeEndpointAccessResponse)
    Q_DISABLE_COPY(AuthorizeEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
