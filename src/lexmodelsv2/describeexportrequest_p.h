// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeexportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeExportRequest;

class DescribeExportRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeExportRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeExportRequest * const q);
    DescribeExportRequestPrivate(const DescribeExportRequestPrivate &other,
                                   DescribeExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
