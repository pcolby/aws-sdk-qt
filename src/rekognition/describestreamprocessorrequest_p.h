// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMPROCESSORREQUEST_P_H
#define QTAWS_DESCRIBESTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "describestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeStreamProcessorRequest;

class DescribeStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    DescribeStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   DescribeStreamProcessorRequest * const q);
    DescribeStreamProcessorRequestPrivate(const DescribeStreamProcessorRequestPrivate &other,
                                   DescribeStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
