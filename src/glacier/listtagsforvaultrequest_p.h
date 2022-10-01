// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORVAULTREQUEST_P_H
#define QTAWS_LISTTAGSFORVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "listtagsforvaultrequest.h"

namespace QtAws {
namespace Glacier {

class ListTagsForVaultRequest;

class ListTagsForVaultRequestPrivate : public GlacierRequestPrivate {

public:
    ListTagsForVaultRequestPrivate(const GlacierRequest::Action action,
                                   ListTagsForVaultRequest * const q);
    ListTagsForVaultRequestPrivate(const ListTagsForVaultRequestPrivate &other,
                                   ListTagsForVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
