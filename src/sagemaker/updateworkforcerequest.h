// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFORCEREQUEST_H
#define QTAWS_UPDATEWORKFORCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkforceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateWorkforceRequest : public SageMakerRequest {

public:
    UpdateWorkforceRequest(const UpdateWorkforceRequest &other);
    UpdateWorkforceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
