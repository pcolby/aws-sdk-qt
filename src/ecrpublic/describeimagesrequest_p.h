// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEIMAGESREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "describeimagesrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImagesRequest;

class DescribeImagesRequestPrivate : public EcrPublicRequestPrivate {

public:
    DescribeImagesRequestPrivate(const EcrPublicRequest::Action action,
                                   DescribeImagesRequest * const q);
    DescribeImagesRequestPrivate(const DescribeImagesRequestPrivate &other,
                                   DescribeImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImagesRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
