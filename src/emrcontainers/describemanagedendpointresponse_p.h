// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEMANAGEDENDPOINTRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeManagedEndpointResponse;

class DescribeManagedEndpointResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit DescribeManagedEndpointResponsePrivate(DescribeManagedEndpointResponse * const q);

    void parseDescribeManagedEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeManagedEndpointResponse)
    Q_DISABLE_COPY(DescribeManagedEndpointResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
