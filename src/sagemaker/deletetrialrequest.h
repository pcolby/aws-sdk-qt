// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALREQUEST_H
#define QTAWS_DELETETRIALREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteTrialRequest : public SageMakerRequest {

public:
    DeleteTrialRequest(const DeleteTrialRequest &other);
    DeleteTrialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
