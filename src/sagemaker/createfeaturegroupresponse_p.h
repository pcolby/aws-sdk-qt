// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATUREGROUPRESPONSE_P_H
#define QTAWS_CREATEFEATUREGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateFeatureGroupResponse;

class CreateFeatureGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateFeatureGroupResponsePrivate(CreateFeatureGroupResponse * const q);

    void parseCreateFeatureGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFeatureGroupResponse)
    Q_DISABLE_COPY(CreateFeatureGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
