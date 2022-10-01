// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHSEGMENTJOBREQUEST_P_H
#define QTAWS_DESCRIBEBATCHSEGMENTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "describebatchsegmentjobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchSegmentJobRequest;

class DescribeBatchSegmentJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeBatchSegmentJobRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeBatchSegmentJobRequest * const q);
    DescribeBatchSegmentJobRequestPrivate(const DescribeBatchSegmentJobRequestPrivate &other,
                                   DescribeBatchSegmentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBatchSegmentJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
