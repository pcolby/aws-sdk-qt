// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTFILTERREQUEST_P_H
#define QTAWS_DELETERECEIPTFILTERREQUEST_P_H

#include "sesrequest_p.h"
#include "deletereceiptfilterrequest.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptFilterRequest;

class DeleteReceiptFilterRequestPrivate : public SesRequestPrivate {

public:
    DeleteReceiptFilterRequestPrivate(const SesRequest::Action action,
                                   DeleteReceiptFilterRequest * const q);
    DeleteReceiptFilterRequestPrivate(const DeleteReceiptFilterRequestPrivate &other,
                                   DeleteReceiptFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptFilterRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
