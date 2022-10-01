// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDENDPOINTRESPONSE_P_H
#define QTAWS_CREATEMANAGEDENDPOINTRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class CreateManagedEndpointResponse;

class CreateManagedEndpointResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit CreateManagedEndpointResponsePrivate(CreateManagedEndpointResponse * const q);

    void parseCreateManagedEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateManagedEndpointResponse)
    Q_DISABLE_COPY(CreateManagedEndpointResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
