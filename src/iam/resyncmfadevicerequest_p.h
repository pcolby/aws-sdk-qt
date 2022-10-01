// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESYNCMFADEVICEREQUEST_P_H
#define QTAWS_RESYNCMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "resyncmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class ResyncMFADeviceRequest;

class ResyncMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    ResyncMFADeviceRequestPrivate(const IamRequest::Action action,
                                   ResyncMFADeviceRequest * const q);
    ResyncMFADeviceRequestPrivate(const ResyncMFADeviceRequestPrivate &other,
                                   ResyncMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResyncMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
