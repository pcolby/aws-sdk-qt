// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREPHONENUMBERREQUEST_P_H
#define QTAWS_RESTOREPHONENUMBERREQUEST_P_H

#include "chimerequest_p.h"
#include "restorephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class RestorePhoneNumberRequest;

class RestorePhoneNumberRequestPrivate : public ChimeRequestPrivate {

public:
    RestorePhoneNumberRequestPrivate(const ChimeRequest::Action action,
                                   RestorePhoneNumberRequest * const q);
    RestorePhoneNumberRequestPrivate(const RestorePhoneNumberRequestPrivate &other,
                                   RestorePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestorePhoneNumberRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
