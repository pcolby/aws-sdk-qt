// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLMODELREQUEST_H
#define QTAWS_CREATEMLMODELREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateMLModelRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateMLModelRequest : public MachineLearningRequest {

public:
    CreateMLModelRequest(const CreateMLModelRequest &other);
    CreateMLModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
