// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteSecurityConfigurationResponse;

class DeleteSecurityConfigurationResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteSecurityConfigurationResponsePrivate(DeleteSecurityConfigurationResponse * const q);

    void parseDeleteSecurityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityConfigurationResponse)
    Q_DISABLE_COPY(DeleteSecurityConfigurationResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
