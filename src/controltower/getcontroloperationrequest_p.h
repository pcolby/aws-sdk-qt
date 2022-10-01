// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLOPERATIONREQUEST_P_H
#define QTAWS_GETCONTROLOPERATIONREQUEST_P_H

#include "controltowerrequest_p.h"
#include "getcontroloperationrequest.h"

namespace QtAws {
namespace ControlTower {

class GetControlOperationRequest;

class GetControlOperationRequestPrivate : public ControlTowerRequestPrivate {

public:
    GetControlOperationRequestPrivate(const ControlTowerRequest::Action action,
                                   GetControlOperationRequest * const q);
    GetControlOperationRequestPrivate(const GetControlOperationRequestPrivate &other,
                                   GetControlOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetControlOperationRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
