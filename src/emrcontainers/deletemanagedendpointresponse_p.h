// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDENDPOINTRESPONSE_P_H
#define QTAWS_DELETEMANAGEDENDPOINTRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteManagedEndpointResponse;

class DeleteManagedEndpointResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit DeleteManagedEndpointResponsePrivate(DeleteManagedEndpointResponse * const q);

    void parseDeleteManagedEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteManagedEndpointResponse)
    Q_DISABLE_COPY(DeleteManagedEndpointResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
