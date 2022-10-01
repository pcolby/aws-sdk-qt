// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERWITHUSERREQUEST_P_H
#define QTAWS_ASSOCIATEPHONENUMBERWITHUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "associatephonenumberwithuserrequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumberWithUserRequest;

class AssociatePhoneNumberWithUserRequestPrivate : public ChimeRequestPrivate {

public:
    AssociatePhoneNumberWithUserRequestPrivate(const ChimeRequest::Action action,
                                   AssociatePhoneNumberWithUserRequest * const q);
    AssociatePhoneNumberWithUserRequestPrivate(const AssociatePhoneNumberWithUserRequestPrivate &other,
                                   AssociatePhoneNumberWithUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumberWithUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
