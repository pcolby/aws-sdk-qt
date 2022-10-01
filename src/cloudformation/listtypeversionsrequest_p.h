// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEVERSIONSREQUEST_P_H
#define QTAWS_LISTTYPEVERSIONSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "listtypeversionsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeVersionsRequest;

class ListTypeVersionsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListTypeVersionsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListTypeVersionsRequest * const q);
    ListTypeVersionsRequestPrivate(const ListTypeVersionsRequestPrivate &other,
                                   ListTypeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTypeVersionsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
