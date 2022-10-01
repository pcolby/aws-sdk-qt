// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTREQUEST_P_H
#define QTAWS_DELETEVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "deletevaultrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultRequest;

class DeleteVaultRequestPrivate : public GlacierRequestPrivate {

public:
    DeleteVaultRequestPrivate(const GlacierRequest::Action action,
                                   DeleteVaultRequest * const q);
    DeleteVaultRequestPrivate(const DeleteVaultRequestPrivate &other,
                                   DeleteVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
