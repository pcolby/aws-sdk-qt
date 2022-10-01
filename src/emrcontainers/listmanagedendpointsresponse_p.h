// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDENDPOINTSRESPONSE_P_H
#define QTAWS_LISTMANAGEDENDPOINTSRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class ListManagedEndpointsResponse;

class ListManagedEndpointsResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit ListManagedEndpointsResponsePrivate(ListManagedEndpointsResponse * const q);

    void parseListManagedEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedEndpointsResponse)
    Q_DISABLE_COPY(ListManagedEndpointsResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
