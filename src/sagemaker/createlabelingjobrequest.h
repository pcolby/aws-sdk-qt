// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELINGJOBREQUEST_H
#define QTAWS_CREATELABELINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateLabelingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateLabelingJobRequest : public SageMakerRequest {

public:
    CreateLabelingJobRequest(const CreateLabelingJobRequest &other);
    CreateLabelingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
