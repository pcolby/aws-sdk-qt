// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAININGJOBREQUEST_H
#define QTAWS_UPDATETRAININGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrainingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateTrainingJobRequest : public SageMakerRequest {

public:
    UpdateTrainingJobRequest(const UpdateTrainingJobRequest &other);
    UpdateTrainingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
