// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCRESPONSE_P_H
#define QTAWS_SSOOIDCRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SsoOidc {

class SsoOidcResponse;

class SsoOidcResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsoOidcResponsePrivate(SsoOidcResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsoOidcResponse)
    Q_DISABLE_COPY(SsoOidcResponsePrivate)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
