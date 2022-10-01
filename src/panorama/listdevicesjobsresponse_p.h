// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESJOBSRESPONSE_P_H
#define QTAWS_LISTDEVICESJOBSRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListDevicesJobsResponse;

class ListDevicesJobsResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListDevicesJobsResponsePrivate(ListDevicesJobsResponse * const q);

    void parseListDevicesJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevicesJobsResponse)
    Q_DISABLE_COPY(ListDevicesJobsResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
