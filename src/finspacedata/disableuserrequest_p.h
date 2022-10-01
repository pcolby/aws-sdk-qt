// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERREQUEST_P_H
#define QTAWS_DISABLEUSERREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "disableuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class DisableUserRequest;

class DisableUserRequestPrivate : public FinspaceDataRequestPrivate {

public:
    DisableUserRequestPrivate(const FinspaceDataRequest::Action action,
                                   DisableUserRequest * const q);
    DisableUserRequestPrivate(const DisableUserRequestPrivate &other,
                                   DisableUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
