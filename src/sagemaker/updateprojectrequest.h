// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTREQUEST_H
#define QTAWS_UPDATEPROJECTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateProjectRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateProjectRequest : public SageMakerRequest {

public:
    UpdateProjectRequest(const UpdateProjectRequest &other);
    UpdateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
