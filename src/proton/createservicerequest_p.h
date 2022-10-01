// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEREQUEST_P_H
#define QTAWS_CREATESERVICEREQUEST_P_H

#include "protonrequest_p.h"
#include "createservicerequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceRequest;

class CreateServiceRequestPrivate : public ProtonRequestPrivate {

public:
    CreateServiceRequestPrivate(const ProtonRequest::Action action,
                                   CreateServiceRequest * const q);
    CreateServiceRequestPrivate(const CreateServiceRequestPrivate &other,
                                   CreateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
