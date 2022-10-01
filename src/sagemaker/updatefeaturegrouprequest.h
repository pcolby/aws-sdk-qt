// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREGROUPREQUEST_H
#define QTAWS_UPDATEFEATUREGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateFeatureGroupRequest : public SageMakerRequest {

public:
    UpdateFeatureGroupRequest(const UpdateFeatureGroupRequest &other);
    UpdateFeatureGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
