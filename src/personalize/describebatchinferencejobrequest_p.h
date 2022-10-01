// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHINFERENCEJOBREQUEST_P_H
#define QTAWS_DESCRIBEBATCHINFERENCEJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "describebatchinferencejobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchInferenceJobRequest;

class DescribeBatchInferenceJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeBatchInferenceJobRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeBatchInferenceJobRequest * const q);
    DescribeBatchInferenceJobRequestPrivate(const DescribeBatchInferenceJobRequestPrivate &other,
                                   DescribeBatchInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBatchInferenceJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
