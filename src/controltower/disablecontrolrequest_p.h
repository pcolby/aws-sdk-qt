// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECONTROLREQUEST_P_H
#define QTAWS_DISABLECONTROLREQUEST_P_H

#include "controltowerrequest_p.h"
#include "disablecontrolrequest.h"

namespace QtAws {
namespace ControlTower {

class DisableControlRequest;

class DisableControlRequestPrivate : public ControlTowerRequestPrivate {

public:
    DisableControlRequestPrivate(const ControlTowerRequest::Action action,
                                   DisableControlRequest * const q);
    DisableControlRequestPrivate(const DisableControlRequestPrivate &other,
                                   DisableControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableControlRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
