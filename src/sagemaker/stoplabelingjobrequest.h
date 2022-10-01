// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLABELINGJOBREQUEST_H
#define QTAWS_STOPLABELINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopLabelingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopLabelingJobRequest : public SageMakerRequest {

public:
    StopLabelingJobRequest(const StopLabelingJobRequest &other);
    StopLabelingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
