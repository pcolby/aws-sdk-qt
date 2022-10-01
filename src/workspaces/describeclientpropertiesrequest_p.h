// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTPROPERTIESREQUEST_P_H
#define QTAWS_DESCRIBECLIENTPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeclientpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientPropertiesRequest;

class DescribeClientPropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeClientPropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeClientPropertiesRequest * const q);
    DescribeClientPropertiesRequestPrivate(const DescribeClientPropertiesRequestPrivate &other,
                                   DescribeClientPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
