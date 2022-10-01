// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTCONFIGRESPONSE_P_H
#define QTAWS_DELETEENDPOINTCONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteEndpointConfigResponse;

class DeleteEndpointConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteEndpointConfigResponsePrivate(DeleteEndpointConfigResponse * const q);

    void parseDeleteEndpointConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointConfigResponse)
    Q_DISABLE_COPY(DeleteEndpointConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
