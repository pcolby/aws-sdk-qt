// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTREQUEST_P_H
#define QTAWS_UPDATECOMPONENTREQUEST_P_H

#include "protonrequest_p.h"
#include "updatecomponentrequest.h"

namespace QtAws {
namespace Proton {

class UpdateComponentRequest;

class UpdateComponentRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateComponentRequestPrivate(const ProtonRequest::Action action,
                                   UpdateComponentRequest * const q);
    UpdateComponentRequestPrivate(const UpdateComponentRequestPrivate &other,
                                   UpdateComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateComponentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
