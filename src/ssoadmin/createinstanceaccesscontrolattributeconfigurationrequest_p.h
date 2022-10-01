// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "createinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreateInstanceAccessControlAttributeConfigurationRequest;

class CreateInstanceAccessControlAttributeConfigurationRequestPrivate : public SsoAdminRequestPrivate {

public:
    CreateInstanceAccessControlAttributeConfigurationRequestPrivate(const SsoAdminRequest::Action action,
                                   CreateInstanceAccessControlAttributeConfigurationRequest * const q);
    CreateInstanceAccessControlAttributeConfigurationRequestPrivate(const CreateInstanceAccessControlAttributeConfigurationRequestPrivate &other,
                                   CreateInstanceAccessControlAttributeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
