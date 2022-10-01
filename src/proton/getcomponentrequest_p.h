// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTREQUEST_P_H
#define QTAWS_GETCOMPONENTREQUEST_P_H

#include "protonrequest_p.h"
#include "getcomponentrequest.h"

namespace QtAws {
namespace Proton {

class GetComponentRequest;

class GetComponentRequestPrivate : public ProtonRequestPrivate {

public:
    GetComponentRequestPrivate(const ProtonRequest::Action action,
                                   GetComponentRequest * const q);
    GetComponentRequestPrivate(const GetComponentRequestPrivate &other,
                                   GetComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComponentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
