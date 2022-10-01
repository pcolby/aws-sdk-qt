// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIONREQUEST_H
#define QTAWS_CREATEACTIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateActionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateActionRequest : public SageMakerRequest {

public:
    CreateActionRequest(const CreateActionRequest &other);
    CreateActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
