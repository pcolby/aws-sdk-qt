// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceNodeInstancesResponse;

class ListApplicationInstanceNodeInstancesResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListApplicationInstanceNodeInstancesResponsePrivate(ListApplicationInstanceNodeInstancesResponse * const q);

    void parseListApplicationInstanceNodeInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstanceNodeInstancesResponse)
    Q_DISABLE_COPY(ListApplicationInstanceNodeInstancesResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
