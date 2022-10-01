// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOBILEDEVICEACCESSRULEREQUEST_H
#define QTAWS_CREATEMOBILEDEVICEACCESSRULEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class CreateMobileDeviceAccessRuleRequestPrivate;

class QTAWSWORKMAIL_EXPORT CreateMobileDeviceAccessRuleRequest : public WorkMailRequest {

public:
    CreateMobileDeviceAccessRuleRequest(const CreateMobileDeviceAccessRuleRequest &other);
    CreateMobileDeviceAccessRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
