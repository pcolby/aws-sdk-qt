// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMFADEVICESREQUEST_P_H
#define QTAWS_LISTVIRTUALMFADEVICESREQUEST_P_H

#include "iamrequest_p.h"
#include "listvirtualmfadevicesrequest.h"

namespace QtAws {
namespace Iam {

class ListVirtualMFADevicesRequest;

class ListVirtualMFADevicesRequestPrivate : public IamRequestPrivate {

public:
    ListVirtualMFADevicesRequestPrivate(const IamRequest::Action action,
                                   ListVirtualMFADevicesRequest * const q);
    ListVirtualMFADevicesRequestPrivate(const ListVirtualMFADevicesRequestPrivate &other,
                                   ListVirtualMFADevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualMFADevicesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
