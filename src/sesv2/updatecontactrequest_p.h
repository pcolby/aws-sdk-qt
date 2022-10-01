// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTREQUEST_P_H
#define QTAWS_UPDATECONTACTREQUEST_P_H

#include "sesv2request_p.h"
#include "updatecontactrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactRequest;

class UpdateContactRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateContactRequestPrivate(const SESv2Request::Action action,
                                   UpdateContactRequest * const q);
    UpdateContactRequestPrivate(const UpdateContactRequestPrivate &other,
                                   UpdateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
