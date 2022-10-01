// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELINGJOBREQUEST_H
#define QTAWS_DESCRIBELABELINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLabelingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeLabelingJobRequest : public SageMakerRequest {

public:
    DescribeLabelingJobRequest(const DescribeLabelingJobRequest &other);
    DescribeLabelingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
