// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECODEREPOSITORYREQUEST_H
#define QTAWS_UPDATECODEREPOSITORYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateCodeRepositoryRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateCodeRepositoryRequest : public SageMakerRequest {

public:
    UpdateCodeRepositoryRequest(const UpdateCodeRepositoryRequest &other);
    UpdateCodeRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCodeRepositoryRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
