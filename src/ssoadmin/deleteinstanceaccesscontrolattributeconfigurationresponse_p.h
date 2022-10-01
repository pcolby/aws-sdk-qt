// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInstanceAccessControlAttributeConfigurationResponse;

class DeleteInstanceAccessControlAttributeConfigurationResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DeleteInstanceAccessControlAttributeConfigurationResponsePrivate(DeleteInstanceAccessControlAttributeConfigurationResponse * const q);

    void parseDeleteInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(DeleteInstanceAccessControlAttributeConfigurationResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
