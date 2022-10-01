// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHINFERENCEJOBREQUEST_P_H
#define QTAWS_CREATEBATCHINFERENCEJOBREQUEST_P_H

#include "personalizerequest_p.h"
#include "createbatchinferencejobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchInferenceJobRequest;

class CreateBatchInferenceJobRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateBatchInferenceJobRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateBatchInferenceJobRequest * const q);
    CreateBatchInferenceJobRequestPrivate(const CreateBatchInferenceJobRequestPrivate &other,
                                   CreateBatchInferenceJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBatchInferenceJobRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
