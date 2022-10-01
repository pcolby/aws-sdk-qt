// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRANSFORMJOBREQUEST_H
#define QTAWS_STOPTRANSFORMJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTransformJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopTransformJobRequest : public SageMakerRequest {

public:
    StopTransformJobRequest(const StopTransformJobRequest &other);
    StopTransformJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
