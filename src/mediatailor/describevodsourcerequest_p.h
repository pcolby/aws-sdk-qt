// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVODSOURCEREQUEST_P_H
#define QTAWS_DESCRIBEVODSOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "describevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeVodSourceRequest;

class DescribeVodSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    DescribeVodSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   DescribeVodSourceRequest * const q);
    DescribeVodSourceRequestPrivate(const DescribeVodSourceRequestPrivate &other,
                                   DescribeVodSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
