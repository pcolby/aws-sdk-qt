// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMERESPONSE_P_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class SageMakerFeatureStoreRuntimeResponse;

class SageMakerFeatureStoreRuntimeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SageMakerFeatureStoreRuntimeResponsePrivate(SageMakerFeatureStoreRuntimeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SageMakerFeatureStoreRuntimeResponse)
    Q_DISABLE_COPY(SageMakerFeatureStoreRuntimeResponsePrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
