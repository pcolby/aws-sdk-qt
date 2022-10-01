// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONREQUEST_H
#define QTAWS_UPDATEACTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateActionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateActionRequest : public SageMakerRequest {

public:
    UpdateActionRequest(const UpdateActionRequest &other);
    UpdateActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
