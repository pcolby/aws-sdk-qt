// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARTIFACTREQUEST_H
#define QTAWS_CREATEARTIFACTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateArtifactRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateArtifactRequest : public SageMakerRequest {

public:
    CreateArtifactRequest(const CreateArtifactRequest &other);
    CreateArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
