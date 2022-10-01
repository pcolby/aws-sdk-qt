// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class UpdateInstanceAccessControlAttributeConfigurationResponse;

class UpdateInstanceAccessControlAttributeConfigurationResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit UpdateInstanceAccessControlAttributeConfigurationResponsePrivate(UpdateInstanceAccessControlAttributeConfigurationResponse * const q);

    void parseUpdateInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(UpdateInstanceAccessControlAttributeConfigurationResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
