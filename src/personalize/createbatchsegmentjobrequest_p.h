// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHSEGMENTJOBREQUEST_P_H
#define QTAWS_CREATEBATCHSEGMENTJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "createbatchsegmentjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchSegmentJobRequest;

class CreateBatchSegmentJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateBatchSegmentJobRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateBatchSegmentJobRequest * const q);
    CreateBatchSegmentJobRequestPrivate(const CreateBatchSegmentJobRequestPrivate &other,
                                   CreateBatchSegmentJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBatchSegmentJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
