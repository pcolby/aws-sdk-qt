// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLMODELREQUEST_H
#define QTAWS_UPDATEMLMODELREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateMLModelRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateMLModelRequest : public MachineLearningRequest {

public:
    UpdateMLModelRequest(const UpdateMLModelRequest &other);
    UpdateMLModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
