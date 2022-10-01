// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTBRANDINGREQUEST_P_H
#define QTAWS_DESCRIBECLIENTBRANDINGREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientBrandingRequest;

class DescribeClientBrandingRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeClientBrandingRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeClientBrandingRequest * const q);
    DescribeClientBrandingRequestPrivate(const DescribeClientBrandingRequestPrivate &other,
                                   DescribeClientBrandingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientBrandingRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
