// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETSREQUEST_P_H
#define QTAWS_LISTSTACKSETSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststacksetsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetsRequest;

class ListStackSetsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStackSetsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStackSetsRequest * const q);
    ListStackSetsRequestPrivate(const ListStackSetsRequestPrivate &other,
                                   ListStackSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackSetsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
