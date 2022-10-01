// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEVERSIONREQUEST_H
#define QTAWS_CREATEIMAGEVERSIONREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateImageVersionRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateImageVersionRequest : public SageMakerRequest {

public:
    CreateImageVersionRequest(const CreateImageVersionRequest &other);
    CreateImageVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageVersionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
