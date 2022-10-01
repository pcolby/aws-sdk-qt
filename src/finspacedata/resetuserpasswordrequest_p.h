// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETUSERPASSWORDREQUEST_P_H
#define QTAWS_RESETUSERPASSWORDREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "resetuserpasswordrequest.h"

namespace QtAws {
namespace FinspaceData {

class ResetUserPasswordRequest;

class ResetUserPasswordRequestPrivate : public FinspaceDataRequestPrivate {

public:
    ResetUserPasswordRequestPrivate(const FinspaceDataRequest::Action action,
                                   ResetUserPasswordRequest * const q);
    ResetUserPasswordRequestPrivate(const ResetUserPasswordRequestPrivate &other,
                                   ResetUserPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetUserPasswordRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
