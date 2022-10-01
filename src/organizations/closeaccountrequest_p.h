// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEACCOUNTREQUEST_P_H
#define QTAWS_CLOSEACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "closeaccountrequest.h"

namespace QtAws {
namespace Organizations {

class CloseAccountRequest;

class CloseAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    CloseAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   CloseAccountRequest * const q);
    CloseAccountRequestPrivate(const CloseAccountRequestPrivate &other,
                                   CloseAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloseAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
