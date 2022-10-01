// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCESRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONINSTANCESRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstancesResponse;

class ListApplicationInstancesResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListApplicationInstancesResponsePrivate(ListApplicationInstancesResponse * const q);

    void parseListApplicationInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstancesResponse)
    Q_DISABLE_COPY(ListApplicationInstancesResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
