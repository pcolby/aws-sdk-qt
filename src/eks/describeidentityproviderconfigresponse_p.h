// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeIdentityProviderConfigResponse;

class DescribeIdentityProviderConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeIdentityProviderConfigResponsePrivate(DescribeIdentityProviderConfigResponse * const q);

    void parseDescribeIdentityProviderConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderConfigResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
