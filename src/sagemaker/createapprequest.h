// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPREQUEST_H
#define QTAWS_CREATEAPPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAppRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateAppRequest : public SageMakerRequest {

public:
    CreateAppRequest(const CreateAppRequest &other);
    CreateAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
