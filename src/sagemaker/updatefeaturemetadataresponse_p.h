// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREMETADATARESPONSE_P_H
#define QTAWS_UPDATEFEATUREMETADATARESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureMetadataResponse;

class UpdateFeatureMetadataResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateFeatureMetadataResponsePrivate(UpdateFeatureMetadataResponse * const q);

    void parseUpdateFeatureMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureMetadataResponse)
    Q_DISABLE_COPY(UpdateFeatureMetadataResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
