// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEDIMENSIONSRESPONSE_P_H
#define QTAWS_LISTAVAILABLERESOURCEDIMENSIONSRESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceDimensionsResponse;

class ListAvailableResourceDimensionsResponsePrivate : public PiResponsePrivate {

public:

    explicit ListAvailableResourceDimensionsResponsePrivate(ListAvailableResourceDimensionsResponse * const q);

    void parseListAvailableResourceDimensionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableResourceDimensionsResponse)
    Q_DISABLE_COPY(ListAvailableResourceDimensionsResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
