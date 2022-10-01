// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLMODELREQUEST_P_H
#define QTAWS_UPDATEMLMODELREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "updatemlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateMLModelRequest;

class UpdateMLModelRequestPrivate : public MachineLearningRequestPrivate {

public:
    UpdateMLModelRequestPrivate(const MachineLearningRequest::Action action,
                                   UpdateMLModelRequest * const q);
    UpdateMLModelRequestPrivate(const UpdateMLModelRequestPrivate &other,
                                   UpdateMLModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
