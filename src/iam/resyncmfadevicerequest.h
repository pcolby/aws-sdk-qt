// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESYNCMFADEVICEREQUEST_H
#define QTAWS_RESYNCMFADEVICEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ResyncMFADeviceRequestPrivate;

class QTAWSIAM_EXPORT ResyncMFADeviceRequest : public IamRequest {

public:
    ResyncMFADeviceRequest(const ResyncMFADeviceRequest &other);
    ResyncMFADeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResyncMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
