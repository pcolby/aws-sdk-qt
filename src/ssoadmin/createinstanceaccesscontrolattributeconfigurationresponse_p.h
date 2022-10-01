// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class CreateInstanceAccessControlAttributeConfigurationResponse;

class CreateInstanceAccessControlAttributeConfigurationResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit CreateInstanceAccessControlAttributeConfigurationResponsePrivate(CreateInstanceAccessControlAttributeConfigurationResponse * const q);

    void parseCreateInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(CreateInstanceAccessControlAttributeConfigurationResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
