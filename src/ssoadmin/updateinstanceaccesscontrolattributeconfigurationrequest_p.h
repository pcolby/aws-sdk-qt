// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "updateinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class UpdateInstanceAccessControlAttributeConfigurationRequest;

class UpdateInstanceAccessControlAttributeConfigurationRequestPrivate : public SsoAdminRequestPrivate {

public:
    UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(const SsoAdminRequest::Action action,
                                   UpdateInstanceAccessControlAttributeConfigurationRequest * const q);
    UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(const UpdateInstanceAccessControlAttributeConfigurationRequestPrivate &other,
                                   UpdateInstanceAccessControlAttributeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
