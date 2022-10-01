// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARTIFACTREQUEST_H
#define QTAWS_UPDATEARTIFACTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateArtifactRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateArtifactRequest : public SageMakerRequest {

public:
    UpdateArtifactRequest(const UpdateArtifactRequest &other);
    UpdateArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
