// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERFROMUSERREQUEST_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERFROMUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "disassociatephonenumberfromuserrequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumberFromUserRequest;

class DisassociatePhoneNumberFromUserRequestPrivate : public ChimeRequestPrivate {

public:
    DisassociatePhoneNumberFromUserRequestPrivate(const ChimeRequest::Action action,
                                   DisassociatePhoneNumberFromUserRequest * const q);
    DisassociatePhoneNumberFromUserRequestPrivate(const DisassociatePhoneNumberFromUserRequestPrivate &other,
                                   DisassociatePhoneNumberFromUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumberFromUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
