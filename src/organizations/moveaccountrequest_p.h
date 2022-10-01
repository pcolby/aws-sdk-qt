// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEACCOUNTREQUEST_P_H
#define QTAWS_MOVEACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "moveaccountrequest.h"

namespace QtAws {
namespace Organizations {

class MoveAccountRequest;

class MoveAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    MoveAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   MoveAccountRequest * const q);
    MoveAccountRequestPrivate(const MoveAccountRequestPrivate &other,
                                   MoveAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(MoveAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
