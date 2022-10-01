// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTFILTERREQUEST_P_H
#define QTAWS_CREATERECEIPTFILTERREQUEST_P_H

#include "sesrequest_p.h"
#include "createreceiptfilterrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptFilterRequest;

class CreateReceiptFilterRequestPrivate : public SesRequestPrivate {

public:
    CreateReceiptFilterRequestPrivate(const SesRequest::Action action,
                                   CreateReceiptFilterRequest * const q);
    CreateReceiptFilterRequestPrivate(const CreateReceiptFilterRequestPrivate &other,
                                   CreateReceiptFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReceiptFilterRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
