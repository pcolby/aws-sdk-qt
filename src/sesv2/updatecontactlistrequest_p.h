// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTLISTREQUEST_P_H
#define QTAWS_UPDATECONTACTLISTREQUEST_P_H

#include "sesv2request_p.h"
#include "updatecontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactListRequest;

class UpdateContactListRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateContactListRequestPrivate(const SESv2Request::Action action,
                                   UpdateContactListRequest * const q);
    UpdateContactListRequestPrivate(const UpdateContactListRequestPrivate &other,
                                   UpdateContactListRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
