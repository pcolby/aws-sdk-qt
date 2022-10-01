// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEE911ADDRESSREQUEST_P_H
#define QTAWS_VALIDATEE911ADDRESSREQUEST_P_H

#include "chimerequest_p.h"
#include "validatee911addressrequest.h"

namespace QtAws {
namespace Chime {

class ValidateE911AddressRequest;

class ValidateE911AddressRequestPrivate : public ChimeRequestPrivate {

public:
    ValidateE911AddressRequestPrivate(const ChimeRequest::Action action,
                                   ValidateE911AddressRequest * const q);
    ValidateE911AddressRequestPrivate(const ValidateE911AddressRequestPrivate &other,
                                   ValidateE911AddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateE911AddressRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
