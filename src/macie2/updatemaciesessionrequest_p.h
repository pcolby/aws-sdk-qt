// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMACIESESSIONREQUEST_P_H
#define QTAWS_UPDATEMACIESESSIONREQUEST_P_H

#include "macie2request_p.h"
#include "updatemaciesessionrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateMacieSessionRequest;

class UpdateMacieSessionRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateMacieSessionRequestPrivate(const Macie2Request::Action action,
                                   UpdateMacieSessionRequest * const q);
    UpdateMacieSessionRequestPrivate(const UpdateMacieSessionRequestPrivate &other,
                                   UpdateMacieSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMacieSessionRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
