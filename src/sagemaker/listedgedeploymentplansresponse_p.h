// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEDEPLOYMENTPLANSRESPONSE_P_H
#define QTAWS_LISTEDGEDEPLOYMENTPLANSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListEdgeDeploymentPlansResponse;

class ListEdgeDeploymentPlansResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListEdgeDeploymentPlansResponsePrivate(ListEdgeDeploymentPlansResponse * const q);

    void parseListEdgeDeploymentPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEdgeDeploymentPlansResponse)
    Q_DISABLE_COPY(ListEdgeDeploymentPlansResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
