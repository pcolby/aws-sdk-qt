// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYREQUEST_P_H
#define QTAWS_DELETEEMAILIDENTITYREQUEST_P_H

#include "sesv2request_p.h"
#include "deleteemailidentityrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityRequest;

class DeleteEmailIdentityRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteEmailIdentityRequestPrivate(const SESv2Request::Action action,
                                   DeleteEmailIdentityRequest * const q);
    DeleteEmailIdentityRequestPrivate(const DeleteEmailIdentityRequestPrivate &other,
                                   DeleteEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
