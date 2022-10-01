// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDINVOCATIONSREQUEST_P_H
#define QTAWS_LISTCOMMANDINVOCATIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listcommandinvocationsrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandInvocationsRequest;

class ListCommandInvocationsRequestPrivate : public SsmRequestPrivate {

public:
    ListCommandInvocationsRequestPrivate(const SsmRequest::Action action,
                                   ListCommandInvocationsRequest * const q);
    ListCommandInvocationsRequestPrivate(const ListCommandInvocationsRequestPrivate &other,
                                   ListCommandInvocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCommandInvocationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
