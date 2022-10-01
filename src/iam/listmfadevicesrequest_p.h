// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICESREQUEST_P_H
#define QTAWS_LISTMFADEVICESREQUEST_P_H

#include "iamrequest_p.h"
#include "listmfadevicesrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADevicesRequest;

class ListMFADevicesRequestPrivate : public IamRequestPrivate {

public:
    ListMFADevicesRequestPrivate(const IamRequest::Action action,
                                   ListMFADevicesRequest * const q);
    ListMFADevicesRequestPrivate(const ListMFADevicesRequestPrivate &other,
                                   ListMFADevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMFADevicesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
