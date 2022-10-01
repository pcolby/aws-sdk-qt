// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLMODELREQUEST_P_H
#define QTAWS_CREATEMLMODELREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createmlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateMLModelRequest;

class CreateMLModelRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateMLModelRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateMLModelRequest * const q);
    CreateMLModelRequestPrivate(const CreateMLModelRequestPrivate &other,
                                   CreateMLModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
