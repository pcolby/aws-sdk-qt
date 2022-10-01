// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATUREGROUPREQUEST_H
#define QTAWS_CREATEFEATUREGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateFeatureGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateFeatureGroupRequest : public SageMakerRequest {

public:
    CreateFeatureGroupRequest(const CreateFeatureGroupRequest &other);
    CreateFeatureGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
