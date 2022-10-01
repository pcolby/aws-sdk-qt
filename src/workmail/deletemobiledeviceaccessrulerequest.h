// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSRULEREQUEST_H
#define QTAWS_DELETEMOBILEDEVICEACCESSRULEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessRuleRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteMobileDeviceAccessRuleRequest : public WorkMailRequest {

public:
    DeleteMobileDeviceAccessRuleRequest(const DeleteMobileDeviceAccessRuleRequest &other);
    DeleteMobileDeviceAccessRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMobileDeviceAccessRuleRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
