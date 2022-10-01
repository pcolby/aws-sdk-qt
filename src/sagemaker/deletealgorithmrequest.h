// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALGORITHMREQUEST_H
#define QTAWS_DELETEALGORITHMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAlgorithmRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAlgorithmRequest : public SageMakerRequest {

public:
    DeleteAlgorithmRequest(const DeleteAlgorithmRequest &other);
    DeleteAlgorithmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlgorithmRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
