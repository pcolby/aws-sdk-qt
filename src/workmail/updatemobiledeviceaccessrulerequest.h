// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMOBILEDEVICEACCESSRULEREQUEST_H
#define QTAWS_UPDATEMOBILEDEVICEACCESSRULEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMobileDeviceAccessRuleRequestPrivate;

class QTAWSWORKMAIL_EXPORT UpdateMobileDeviceAccessRuleRequest : public WorkMailRequest {

public:
    UpdateMobileDeviceAccessRuleRequest(const UpdateMobileDeviceAccessRuleRequest &other);
    UpdateMobileDeviceAccessRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
