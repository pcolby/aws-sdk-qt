// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMVAULTREQUEST_P_H
#define QTAWS_REMOVETAGSFROMVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "removetagsfromvaultrequest.h"

namespace QtAws {
namespace Glacier {

class RemoveTagsFromVaultRequest;

class RemoveTagsFromVaultRequestPrivate : public GlacierRequestPrivate {

public:
    RemoveTagsFromVaultRequestPrivate(const GlacierRequest::Action action,
                                   RemoveTagsFromVaultRequest * const q);
    RemoveTagsFromVaultRequestPrivate(const RemoveTagsFromVaultRequestPrivate &other,
                                   RemoveTagsFromVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
