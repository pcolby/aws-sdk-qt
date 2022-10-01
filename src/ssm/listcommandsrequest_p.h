// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDSREQUEST_P_H
#define QTAWS_LISTCOMMANDSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listcommandsrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandsRequest;

class ListCommandsRequestPrivate : public SsmRequestPrivate {

public:
    ListCommandsRequestPrivate(const SsmRequest::Action action,
                                   ListCommandsRequest * const q);
    ListCommandsRequestPrivate(const ListCommandsRequestPrivate &other,
                                   ListCommandsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCommandsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
