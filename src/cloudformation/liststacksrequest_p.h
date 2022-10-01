// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSREQUEST_P_H
#define QTAWS_LISTSTACKSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststacksrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStacksRequest;

class ListStacksRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStacksRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStacksRequest * const q);
    ListStacksRequestPrivate(const ListStacksRequestPrivate &other,
                                   ListStacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStacksRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
