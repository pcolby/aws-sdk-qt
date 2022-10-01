// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLMODELREQUEST_H
#define QTAWS_GETMLMODELREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetMLModelRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT GetMLModelRequest : public MachineLearningRequest {

public:
    GetMLModelRequest(const GetMLModelRequest &other);
    GetMLModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLModelRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
