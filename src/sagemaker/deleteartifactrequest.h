// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARTIFACTREQUEST_H
#define QTAWS_DELETEARTIFACTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteArtifactRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteArtifactRequest : public SageMakerRequest {

public:
    DeleteArtifactRequest(const DeleteArtifactRequest &other);
    DeleteArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
