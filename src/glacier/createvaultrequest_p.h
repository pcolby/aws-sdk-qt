// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVAULTREQUEST_P_H
#define QTAWS_CREATEVAULTREQUEST_P_H

#include "glacierrequest_p.h"
#include "createvaultrequest.h"

namespace QtAws {
namespace Glacier {

class CreateVaultRequest;

class CreateVaultRequestPrivate : public GlacierRequestPrivate {

public:
    CreateVaultRequestPrivate(const GlacierRequest::Action action,
                                   CreateVaultRequest * const q);
    CreateVaultRequestPrivate(const CreateVaultRequestPrivate &other,
                                   CreateVaultRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVaultRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
