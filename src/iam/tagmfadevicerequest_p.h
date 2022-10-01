// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMFADEVICEREQUEST_P_H
#define QTAWS_TAGMFADEVICEREQUEST_P_H

#include "iamrequest_p.h"
#include "tagmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class TagMFADeviceRequest;

class TagMFADeviceRequestPrivate : public IamRequestPrivate {

public:
    TagMFADeviceRequestPrivate(const IamRequest::Action action,
                                   TagMFADeviceRequest * const q);
    TagMFADeviceRequestPrivate(const TagMFADeviceRequestPrivate &other,
                                   TagMFADeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
