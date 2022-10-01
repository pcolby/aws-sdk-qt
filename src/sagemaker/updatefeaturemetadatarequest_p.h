// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREMETADATAREQUEST_P_H
#define QTAWS_UPDATEFEATUREMETADATAREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatefeaturemetadatarequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureMetadataRequest;

class UpdateFeatureMetadataRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateFeatureMetadataRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateFeatureMetadataRequest * const q);
    UpdateFeatureMetadataRequestPrivate(const UpdateFeatureMetadataRequestPrivate &other,
                                   UpdateFeatureMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
