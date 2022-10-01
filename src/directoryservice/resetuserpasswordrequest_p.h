// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETUSERPASSWORDREQUEST_P_H
#define QTAWS_RESETUSERPASSWORDREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "resetuserpasswordrequest.h"

namespace QtAws {
namespace DirectoryService {

class ResetUserPasswordRequest;

class ResetUserPasswordRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ResetUserPasswordRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ResetUserPasswordRequest * const q);
    ResetUserPasswordRequestPrivate(const ResetUserPasswordRequestPrivate &other,
                                   ResetUserPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetUserPasswordRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
