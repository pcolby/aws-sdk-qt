// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSREQUEST_P_H
#define QTAWS_CREATEACCESSREQUEST_P_H

#include "transferrequest_p.h"
#include "createaccessrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAccessRequest;

class CreateAccessRequestPrivate : public TransferRequestPrivate {

public:
    CreateAccessRequestPrivate(const TransferRequest::Action action,
                                   CreateAccessRequest * const q);
    CreateAccessRequestPrivate(const CreateAccessRequestPrivate &other,
                                   CreateAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
