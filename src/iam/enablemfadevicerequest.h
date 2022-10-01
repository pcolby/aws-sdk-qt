// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMFADEVICEREQUEST_H
#define QTAWS_ENABLEMFADEVICEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class EnableMFADeviceRequestPrivate;

class QTAWSIAM_EXPORT EnableMFADeviceRequest : public IamRequest {

public:
    EnableMFADeviceRequest(const EnableMFADeviceRequest &other);
    EnableMFADeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
