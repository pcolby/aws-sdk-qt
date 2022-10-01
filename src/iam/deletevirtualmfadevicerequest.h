// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALMFADEVICEREQUEST_H
#define QTAWS_DELETEVIRTUALMFADEVICEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteVirtualMFADeviceRequestPrivate;

class QTAWSIAM_EXPORT DeleteVirtualMFADeviceRequest : public IamRequest {

public:
    DeleteVirtualMFADeviceRequest(const DeleteVirtualMFADeviceRequest &other);
    DeleteVirtualMFADeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
