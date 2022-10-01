// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEPACKAGINGJOBREQUEST_H
#define QTAWS_STOPEDGEPACKAGINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgePackagingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopEdgePackagingJobRequest : public SageMakerRequest {

public:
    StopEdgePackagingJobRequest(const StopEdgePackagingJobRequest &other);
    StopEdgePackagingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
