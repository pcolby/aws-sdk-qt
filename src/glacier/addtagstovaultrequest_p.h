// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOVAULTREQUEST_P_H
#define QTAWS_ADDTAGSTOVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "addtagstovaultrequest.h"

namespace QtAws {
namespace Glacier {

class AddTagsToVaultRequest;

class AddTagsToVaultRequestPrivate : public GlacierRequestPrivate {

public:
    AddTagsToVaultRequestPrivate(const GlacierRequest::Action action,
                                   AddTagsToVaultRequest * const q);
    AddTagsToVaultRequestPrivate(const AddTagsToVaultRequestPrivate &other,
                                   AddTagsToVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
