// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILTERREQUEST_P_H
#define QTAWS_DESCRIBEFILTERREQUEST_P_H

#include "personalizerequest_p.h"
#include "describefilterrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFilterRequest;

class DescribeFilterRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeFilterRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeFilterRequest * const q);
    DescribeFilterRequestPrivate(const DescribeFilterRequestPrivate &other,
                                   DescribeFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
