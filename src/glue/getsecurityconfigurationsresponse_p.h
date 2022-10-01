// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONSRESPONSE_P_H
#define QTAWS_GETSECURITYCONFIGURATIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationsResponse;

class GetSecurityConfigurationsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSecurityConfigurationsResponsePrivate(GetSecurityConfigurationsResponse * const q);

    void parseGetSecurityConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSecurityConfigurationsResponse)
    Q_DISABLE_COPY(GetSecurityConfigurationsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
