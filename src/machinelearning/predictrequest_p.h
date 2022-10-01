// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREDICTREQUEST_P_H
#define QTAWS_PREDICTREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "predictrequest.h"

namespace QtAws {
namespace MachineLearning {

class PredictRequest;

class PredictRequestPrivate : public MachineLearningRequestPrivate {

public:
    PredictRequestPrivate(const MachineLearningRequest::Action action,
                                   PredictRequest * const q);
    PredictRequestPrivate(const PredictRequestPrivate &other,
                                   PredictRequest * const q);

private:
    Q_DECLARE_PUBLIC(PredictRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
