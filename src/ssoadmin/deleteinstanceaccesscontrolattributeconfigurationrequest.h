// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H
#define QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInstanceAccessControlAttributeConfigurationRequestPrivate;

class QTAWSSSOADMIN_EXPORT DeleteInstanceAccessControlAttributeConfigurationRequest : public SsoAdminRequest {

public:
    DeleteInstanceAccessControlAttributeConfigurationRequest(const DeleteInstanceAccessControlAttributeConfigurationRequest &other);
    DeleteInstanceAccessControlAttributeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
