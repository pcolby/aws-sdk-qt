// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYEMAILADDRESSREQUEST_P_H
#define QTAWS_UPDATEPRIMARYEMAILADDRESSREQUEST_P_H

#include "workmailrequest_p.h"
#include "updateprimaryemailaddressrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdatePrimaryEmailAddressRequest;

class UpdatePrimaryEmailAddressRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdatePrimaryEmailAddressRequestPrivate(const WorkMailRequest::Action action,
                                   UpdatePrimaryEmailAddressRequest * const q);
    UpdatePrimaryEmailAddressRequestPrivate(const UpdatePrimaryEmailAddressRequestPrivate &other,
                                   UpdatePrimaryEmailAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePrimaryEmailAddressRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
