// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONSREQUEST_P_H
#define QTAWS_LISTSTACKSETOPERATIONSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststacksetoperationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationsRequest;

class ListStackSetOperationsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStackSetOperationsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStackSetOperationsRequest * const q);
    ListStackSetOperationsRequestPrivate(const ListStackSetOperationsRequestPrivate &other,
                                   ListStackSetOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackSetOperationsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
