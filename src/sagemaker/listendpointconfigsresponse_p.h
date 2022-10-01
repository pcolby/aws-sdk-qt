// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTCONFIGSRESPONSE_P_H
#define QTAWS_LISTENDPOINTCONFIGSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListEndpointConfigsResponse;

class ListEndpointConfigsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListEndpointConfigsResponsePrivate(ListEndpointConfigsResponse * const q);

    void parseListEndpointConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointConfigsResponse)
    Q_DISABLE_COPY(ListEndpointConfigsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
