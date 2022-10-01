// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDEREQUEST_H
#define QTAWS_DELETEMOBILEDEVICEACCESSOVERRIDEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessOverrideRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteMobileDeviceAccessOverrideRequest : public WorkMailRequest {

public:
    DeleteMobileDeviceAccessOverrideRequest(const DeleteMobileDeviceAccessOverrideRequest &other);
    DeleteMobileDeviceAccessOverrideRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMobileDeviceAccessOverrideRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
