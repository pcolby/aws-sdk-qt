// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMREQUEST_P_H
#define QTAWS_DESCRIBESTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "describestreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeStreamRequest;

class DescribeStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DescribeStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   DescribeStreamRequest * const q);
    DescribeStreamRequestPrivate(const DescribeStreamRequestPrivate &other,
                                   DescribeStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
