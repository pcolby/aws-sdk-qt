// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPILATIONJOBREQUEST_H
#define QTAWS_CREATECOMPILATIONJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateCompilationJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateCompilationJobRequest : public SageMakerRequest {

public:
    CreateCompilationJobRequest(const CreateCompilationJobRequest &other);
    CreateCompilationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
