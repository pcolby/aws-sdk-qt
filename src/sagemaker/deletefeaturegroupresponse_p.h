// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREGROUPRESPONSE_P_H
#define QTAWS_DELETEFEATUREGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteFeatureGroupResponse;

class DeleteFeatureGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteFeatureGroupResponsePrivate(DeleteFeatureGroupResponse * const q);

    void parseDeleteFeatureGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFeatureGroupResponse)
    Q_DISABLE_COPY(DeleteFeatureGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
