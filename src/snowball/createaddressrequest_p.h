// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSREQUEST_P_H
#define QTAWS_CREATEADDRESSREQUEST_P_H

#include "snowballrequest_p.h"
#include "createaddressrequest.h"

namespace QtAws {
namespace Snowball {

class CreateAddressRequest;

class CreateAddressRequestPrivate : public SnowballRequestPrivate {

public:
    CreateAddressRequestPrivate(const SnowballRequest::Action action,
                                   CreateAddressRequest * const q);
    CreateAddressRequestPrivate(const CreateAddressRequestPrivate &other,
                                   CreateAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAddressRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
