// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSREQUEST_P_H
#define QTAWS_LISTPUBLICKEYSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listpublickeysrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListPublicKeysRequest;

class ListPublicKeysRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListPublicKeysRequestPrivate(const CloudTrailRequest::Action action,
                                   ListPublicKeysRequest * const q);
    ListPublicKeysRequestPrivate(const ListPublicKeysRequestPrivate &other,
                                   ListPublicKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPublicKeysRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
