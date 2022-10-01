// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTREQUEST_P_H
#define QTAWS_DESCRIBEIMPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeImportRequest;

class DescribeImportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeImportRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeImportRequest * const q);
    DescribeImportRequestPrivate(const DescribeImportRequestPrivate &other,
                                   DescribeImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
