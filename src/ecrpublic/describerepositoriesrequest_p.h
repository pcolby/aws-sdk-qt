// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESREQUEST_P_H
#define QTAWS_DESCRIBEREPOSITORIESREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "describerepositoriesrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRepositoriesRequest;

class DescribeRepositoriesRequestPrivate : public EcrPublicRequestPrivate {

public:
    DescribeRepositoriesRequestPrivate(const EcrPublicRequest::Action action,
                                   DescribeRepositoriesRequest * const q);
    DescribeRepositoriesRequestPrivate(const DescribeRepositoriesRequestPrivate &other,
                                   DescribeRepositoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoriesRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
