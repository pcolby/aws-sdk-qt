// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVISIBLETOALLUSERSREQUEST_P_H
#define QTAWS_SETVISIBLETOALLUSERSREQUEST_P_H

#include "emrrequest_p.h"
#include "setvisibletoallusersrequest.h"

namespace QtAws {
namespace Emr {

class SetVisibleToAllUsersRequest;

class SetVisibleToAllUsersRequestPrivate : public EmrRequestPrivate {

public:
    SetVisibleToAllUsersRequestPrivate(const EmrRequest::Action action,
                                   SetVisibleToAllUsersRequest * const q);
    SetVisibleToAllUsersRequestPrivate(const SetVisibleToAllUsersRequestPrivate &other,
                                   SetVisibleToAllUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetVisibleToAllUsersRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
