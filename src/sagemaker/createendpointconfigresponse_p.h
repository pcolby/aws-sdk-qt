// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTCONFIGRESPONSE_P_H
#define QTAWS_CREATEENDPOINTCONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointConfigResponse;

class CreateEndpointConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateEndpointConfigResponsePrivate(CreateEndpointConfigResponse * const q);

    void parseCreateEndpointConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEndpointConfigResponse)
    Q_DISABLE_COPY(CreateEndpointConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
