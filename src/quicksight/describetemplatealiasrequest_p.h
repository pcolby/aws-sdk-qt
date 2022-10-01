// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEALIASREQUEST_P_H
#define QTAWS_DESCRIBETEMPLATEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateAliasRequest;

class DescribeTemplateAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeTemplateAliasRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeTemplateAliasRequest * const q);
    DescribeTemplateAliasRequestPrivate(const DescribeTemplateAliasRequestPrivate &other,
                                   DescribeTemplateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
