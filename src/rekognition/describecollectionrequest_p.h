// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOLLECTIONREQUEST_P_H
#define QTAWS_DESCRIBECOLLECTIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "describecollectionrequest.h"

namespace QtAws {
namespace Rekognition {

class DescribeCollectionRequest;

class DescribeCollectionRequestPrivate : public RekognitionRequestPrivate {

public:
    DescribeCollectionRequestPrivate(const RekognitionRequest::Action action,
                                   DescribeCollectionRequest * const q);
    DescribeCollectionRequestPrivate(const DescribeCollectionRequestPrivate &other,
                                   DescribeCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
