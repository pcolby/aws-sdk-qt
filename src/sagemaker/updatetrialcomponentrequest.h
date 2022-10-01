// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRIALCOMPONENTREQUEST_H
#define QTAWS_UPDATETRIALCOMPONENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrialComponentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateTrialComponentRequest : public SageMakerRequest {

public:
    UpdateTrialComponentRequest(const UpdateTrialComponentRequest &other);
    UpdateTrialComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
