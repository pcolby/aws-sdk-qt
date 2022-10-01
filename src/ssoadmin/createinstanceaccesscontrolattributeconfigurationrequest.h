// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H
#define QTAWS_CREATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreateInstanceAccessControlAttributeConfigurationRequestPrivate;

class QTAWSSSOADMIN_EXPORT CreateInstanceAccessControlAttributeConfigurationRequest : public SsoAdminRequest {

public:
    CreateInstanceAccessControlAttributeConfigurationRequest(const CreateInstanceAccessControlAttributeConfigurationRequest &other);
    CreateInstanceAccessControlAttributeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
