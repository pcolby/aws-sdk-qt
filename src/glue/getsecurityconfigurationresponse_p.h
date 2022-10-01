// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETSECURITYCONFIGURATIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationResponse;

class GetSecurityConfigurationResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetSecurityConfigurationResponsePrivate(GetSecurityConfigurationResponse * const q);

    void parseGetSecurityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSecurityConfigurationResponse)
    Q_DISABLE_COPY(GetSecurityConfigurationResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
