// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVERIFIEDEMAILADDRESSREQUEST_P_H
#define QTAWS_DELETEVERIFIEDEMAILADDRESSREQUEST_P_H

#include "sesrequest_p.h"
#include "deleteverifiedemailaddressrequest.h"

namespace QtAws {
namespace Ses {

class DeleteVerifiedEmailAddressRequest;

class DeleteVerifiedEmailAddressRequestPrivate : public SesRequestPrivate {

public:
    DeleteVerifiedEmailAddressRequestPrivate(const SesRequest::Action action,
                                   DeleteVerifiedEmailAddressRequest * const q);
    DeleteVerifiedEmailAddressRequestPrivate(const DeleteVerifiedEmailAddressRequestPrivate &other,
                                   DeleteVerifiedEmailAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVerifiedEmailAddressRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
