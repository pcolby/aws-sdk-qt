// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPERSONALPINREQUEST_P_H
#define QTAWS_RESETPERSONALPINREQUEST_P_H

#include "chimerequest_p.h"
#include "resetpersonalpinrequest.h"

namespace QtAws {
namespace Chime {

class ResetPersonalPINRequest;

class ResetPersonalPINRequestPrivate : public ChimeRequestPrivate {

public:
    ResetPersonalPINRequestPrivate(const ChimeRequest::Action action,
                                   ResetPersonalPINRequest * const q);
    ResetPersonalPINRequestPrivate(const ResetPersonalPINRequestPrivate &other,
                                   ResetPersonalPINRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetPersonalPINRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
