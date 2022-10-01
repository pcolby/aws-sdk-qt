// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREGROUPRESPONSE_P_H
#define QTAWS_UPDATEFEATUREGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureGroupResponse;

class UpdateFeatureGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateFeatureGroupResponsePrivate(UpdateFeatureGroupResponse * const q);

    void parseUpdateFeatureGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureGroupResponse)
    Q_DISABLE_COPY(UpdateFeatureGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
