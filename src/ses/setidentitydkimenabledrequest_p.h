// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYDKIMENABLEDREQUEST_P_H
#define QTAWS_SETIDENTITYDKIMENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "setidentitydkimenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityDkimEnabledRequest;

class SetIdentityDkimEnabledRequestPrivate : public SesRequestPrivate {

public:
    SetIdentityDkimEnabledRequestPrivate(const SesRequest::Action action,
                                   SetIdentityDkimEnabledRequest * const q);
    SetIdentityDkimEnabledRequestPrivate(const SetIdentityDkimEnabledRequestPrivate &other,
                                   SetIdentityDkimEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityDkimEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
