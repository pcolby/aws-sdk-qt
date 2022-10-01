// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTRESPONSE_P_H
#define QTAWS_DELETEENDPOINTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteEndpointResponse;

class DeleteEndpointResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteEndpointResponsePrivate(DeleteEndpointResponse * const q);

    void parseDeleteEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointResponse)
    Q_DISABLE_COPY(DeleteEndpointResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
