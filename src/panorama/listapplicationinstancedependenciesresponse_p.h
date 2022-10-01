// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONINSTANCEDEPENDENCIESRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceDependenciesResponse;

class ListApplicationInstanceDependenciesResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit ListApplicationInstanceDependenciesResponsePrivate(ListApplicationInstanceDependenciesResponse * const q);

    void parseListApplicationInstanceDependenciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationInstanceDependenciesResponse)
    Q_DISABLE_COPY(ListApplicationInstanceDependenciesResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
