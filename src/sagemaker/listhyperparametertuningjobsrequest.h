// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERPARAMETERTUNINGJOBSREQUEST_H
#define QTAWS_LISTHYPERPARAMETERTUNINGJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListHyperParameterTuningJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListHyperParameterTuningJobsRequest : public SageMakerRequest {

public:
    ListHyperParameterTuningJobsRequest(const ListHyperParameterTuningJobsRequest &other);
    ListHyperParameterTuningJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHyperParameterTuningJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
