// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREDICTREQUEST_H
#define QTAWS_PREDICTREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class PredictRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT PredictRequest : public MachineLearningRequest {

public:
    PredictRequest(const PredictRequest &other);
    PredictRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PredictRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
