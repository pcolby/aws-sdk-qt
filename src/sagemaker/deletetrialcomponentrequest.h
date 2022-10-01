// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIALCOMPONENTREQUEST_H
#define QTAWS_DELETETRIALCOMPONENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteTrialComponentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteTrialComponentRequest : public SageMakerRequest {

public:
    DeleteTrialComponentRequest(const DeleteTrialComponentRequest &other);
    DeleteTrialComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
