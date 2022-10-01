// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLMODELREQUEST_P_H
#define QTAWS_GETMLMODELREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "getmlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetMLModelRequest;

class GetMLModelRequestPrivate : public MachineLearningRequestPrivate {

public:
    GetMLModelRequestPrivate(const MachineLearningRequest::Action action,
                                   GetMLModelRequest * const q);
    GetMLModelRequestPrivate(const GetMLModelRequestPrivate &other,
                                   GetMLModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
