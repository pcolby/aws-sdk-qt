// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGETAGSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGETAGSREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "describeimagetagsrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImageTagsRequest;

class DescribeImageTagsRequestPrivate : public EcrPublicRequestPrivate {

public:
    DescribeImageTagsRequestPrivate(const EcrPublicRequest::Action action,
                                   DescribeImageTagsRequest * const q);
    DescribeImageTagsRequestPrivate(const DescribeImageTagsRequestPrivate &other,
                                   DescribeImageTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageTagsRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
