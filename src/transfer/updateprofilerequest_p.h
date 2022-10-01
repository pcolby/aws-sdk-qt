// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEREQUEST_P_H
#define QTAWS_UPDATEPROFILEREQUEST_P_H

#include "transferrequest_p.h"
#include "updateprofilerequest.h"

namespace QtAws {
namespace Transfer {

class UpdateProfileRequest;

class UpdateProfileRequestPrivate : public TransferRequestPrivate {

public:
    UpdateProfileRequestPrivate(const TransferRequest::Action action,
                                   UpdateProfileRequest * const q);
    UpdateProfileRequestPrivate(const UpdateProfileRequestPrivate &other,
                                   UpdateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProfileRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
