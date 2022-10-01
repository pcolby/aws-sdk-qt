// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETAGSREQUEST_P_H
#define QTAWS_LISTRESOURCETAGSREQUEST_P_H

#include "kmsrequest_p.h"
#include "listresourcetagsrequest.h"

namespace QtAws {
namespace Kms {

class ListResourceTagsRequest;

class ListResourceTagsRequestPrivate : public KmsRequestPrivate {

public:
    ListResourceTagsRequestPrivate(const KmsRequest::Action action,
                                   ListResourceTagsRequest * const q);
    ListResourceTagsRequestPrivate(const ListResourceTagsRequestPrivate &other,
                                   ListResourceTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceTagsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
