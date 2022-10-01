// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_P_H
#define QTAWS_UPDATEUSERREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "updateuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateUserRequest;

class UpdateUserRequestPrivate : public FinspaceDataRequestPrivate {

public:
    UpdateUserRequestPrivate(const FinspaceDataRequest::Action action,
                                   UpdateUserRequest * const q);
    UpdateUserRequestPrivate(const UpdateUserRequestPrivate &other,
                                   UpdateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
