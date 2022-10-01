// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTREQUEST_P_H
#define QTAWS_DELETECONTACTREQUEST_P_H

#include "sesv2request_p.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactRequest;

class DeleteContactRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteContactRequestPrivate(const SESv2Request::Action action,
                                   DeleteContactRequest * const q);
    DeleteContactRequestPrivate(const DeleteContactRequestPrivate &other,
                                   DeleteContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
