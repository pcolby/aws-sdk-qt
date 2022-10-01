// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class UpdateInstanceAccessControlAttributeConfigurationRequestPrivate;

class QTAWSSSOADMIN_EXPORT UpdateInstanceAccessControlAttributeConfigurationRequest : public SsoAdminRequest {

public:
    UpdateInstanceAccessControlAttributeConfigurationRequest(const UpdateInstanceAccessControlAttributeConfigurationRequest &other);
    UpdateInstanceAccessControlAttributeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
