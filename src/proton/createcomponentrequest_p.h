// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTREQUEST_P_H
#define QTAWS_CREATECOMPONENTREQUEST_P_H

#include "protonrequest_p.h"
#include "createcomponentrequest.h"

namespace QtAws {
namespace Proton {

class CreateComponentRequest;

class CreateComponentRequestPrivate : public ProtonRequestPrivate {

public:
    CreateComponentRequestPrivate(const ProtonRequest::Action action,
                                   CreateComponentRequest * const q);
    CreateComponentRequestPrivate(const CreateComponentRequestPrivate &other,
                                   CreateComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateComponentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
