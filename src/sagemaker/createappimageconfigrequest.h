// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPIMAGECONFIGREQUEST_H
#define QTAWS_CREATEAPPIMAGECONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateAppImageConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateAppImageConfigRequest : public SageMakerRequest {

public:
    CreateAppImageConfigRequest(const CreateAppImageConfigRequest &other);
    CreateAppImageConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
