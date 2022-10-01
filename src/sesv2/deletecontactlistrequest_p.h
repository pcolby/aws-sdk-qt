// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTLISTREQUEST_P_H
#define QTAWS_DELETECONTACTLISTREQUEST_P_H

#include "sesv2request_p.h"
#include "deletecontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactListRequest;

class DeleteContactListRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteContactListRequestPrivate(const SESv2Request::Action action,
                                   DeleteContactListRequest * const q);
    DeleteContactListRequestPrivate(const DeleteContactListRequestPrivate &other,
                                   DeleteContactListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
