// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSOCIATIONREQUEST_H
#define QTAWS_DELETEASSOCIATIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAssociationRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAssociationRequest : public SageMakerRequest {

public:
    DeleteAssociationRequest(const DeleteAssociationRequest &other);
    DeleteAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssociationRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
