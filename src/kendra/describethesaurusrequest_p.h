// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHESAURUSREQUEST_P_H
#define QTAWS_DESCRIBETHESAURUSREQUEST_P_H

#include "kendrarequest_p.h"
#include "describethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeThesaurusRequest;

class DescribeThesaurusRequestPrivate : public KendraRequestPrivate {

public:
    DescribeThesaurusRequestPrivate(const KendraRequest::Action action,
                                   DescribeThesaurusRequest * const q);
    DescribeThesaurusRequestPrivate(const DescribeThesaurusRequestPrivate &other,
                                   DescribeThesaurusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
