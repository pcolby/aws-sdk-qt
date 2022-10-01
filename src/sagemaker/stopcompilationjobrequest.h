// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCOMPILATIONJOBREQUEST_H
#define QTAWS_STOPCOMPILATIONJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopCompilationJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopCompilationJobRequest : public SageMakerRequest {

public:
    StopCompilationJobRequest(const StopCompilationJobRequest &other);
    StopCompilationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
