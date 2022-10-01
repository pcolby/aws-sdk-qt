// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFORCEREQUEST_H
#define QTAWS_DELETEWORKFORCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkforceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteWorkforceRequest : public SageMakerRequest {

public:
    DeleteWorkforceRequest(const DeleteWorkforceRequest &other);
    DeleteWorkforceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
