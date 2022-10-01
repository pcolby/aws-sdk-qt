// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICETAGSREQUEST_P_H
#define QTAWS_LISTMFADEVICETAGSREQUEST_P_H

#include "iamrequest_p.h"
#include "listmfadevicetagsrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADeviceTagsRequest;

class ListMFADeviceTagsRequestPrivate : public IamRequestPrivate {

public:
    ListMFADeviceTagsRequestPrivate(const IamRequest::Action action,
                                   ListMFADeviceTagsRequest * const q);
    ListMFADeviceTagsRequestPrivate(const ListMFADeviceTagsRequestPrivate &other,
                                   ListMFADeviceTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMFADeviceTagsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
