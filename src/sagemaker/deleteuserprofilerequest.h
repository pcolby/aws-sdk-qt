// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPROFILEREQUEST_H
#define QTAWS_DELETEUSERPROFILEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteUserProfileRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteUserProfileRequest : public SageMakerRequest {

public:
    DeleteUserProfileRequest(const DeleteUserProfileRequest &other);
    DeleteUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserProfileRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
