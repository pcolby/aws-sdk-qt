// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECONTROLREQUEST_P_H
#define QTAWS_ENABLECONTROLREQUEST_P_H

#include "controltowerrequest_p.h"
#include "enablecontrolrequest.h"

namespace QtAws {
namespace ControlTower {

class EnableControlRequest;

class EnableControlRequestPrivate : public ControlTowerRequestPrivate {

public:
    EnableControlRequestPrivate(const ControlTowerRequest::Action action,
                                   EnableControlRequest * const q);
    EnableControlRequestPrivate(const EnableControlRequestPrivate &other,
                                   EnableControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableControlRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
