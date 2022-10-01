// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILEREQUEST_H
#define QTAWS_CREATEUSERPROFILEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateUserProfileRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateUserProfileRequest : public SageMakerRequest {

public:
    CreateUserProfileRequest(const CreateUserProfileRequest &other);
    CreateUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserProfileRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
