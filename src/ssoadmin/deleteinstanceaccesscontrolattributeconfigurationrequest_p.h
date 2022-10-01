// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "deleteinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInstanceAccessControlAttributeConfigurationRequest;

class DeleteInstanceAccessControlAttributeConfigurationRequestPrivate : public SsoAdminRequestPrivate {

public:
    DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(const SsoAdminRequest::Action action,
                                   DeleteInstanceAccessControlAttributeConfigurationRequest * const q);
    DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(const DeleteInstanceAccessControlAttributeConfigurationRequestPrivate &other,
                                   DeleteInstanceAccessControlAttributeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
