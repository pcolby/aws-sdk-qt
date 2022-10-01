// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSREQUEST_P_H
#define QTAWS_UPDATEACCESSREQUEST_P_H

#include "transferrequest_p.h"
#include "updateaccessrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAccessRequest;

class UpdateAccessRequestPrivate : public TransferRequestPrivate {

public:
    UpdateAccessRequestPrivate(const TransferRequest::Action action,
                                   UpdateAccessRequest * const q);
    UpdateAccessRequestPrivate(const UpdateAccessRequestPrivate &other,
                                   UpdateAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
