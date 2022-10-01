// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALGORITHMREQUEST_H
#define QTAWS_CREATEALGORITHMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAlgorithmRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateAlgorithmRequest : public SageMakerRequest {

public:
    CreateAlgorithmRequest(const CreateAlgorithmRequest &other);
    CreateAlgorithmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
