// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALREQUEST_H
#define QTAWS_UPDATETRIALREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateTrialRequest : public SageMakerRequest {

public:
    UpdateTrialRequest(const UpdateTrialRequest &other);
    UpdateTrialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
