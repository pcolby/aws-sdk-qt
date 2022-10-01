// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREMETADATAREQUEST_H
#define QTAWS_UPDATEFEATUREMETADATAREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureMetadataRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateFeatureMetadataRequest : public SageMakerRequest {

public:
    UpdateFeatureMetadataRequest(const UpdateFeatureMetadataRequest &other);
    UpdateFeatureMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFeatureMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
