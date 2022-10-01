// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTPACKAGINGCONFIGURATIONSRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingConfigurationsResponse;

class ListPackagingConfigurationsResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit ListPackagingConfigurationsResponsePrivate(ListPackagingConfigurationsResponse * const q);

    void parseListPackagingConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackagingConfigurationsResponse)
    Q_DISABLE_COPY(ListPackagingConfigurationsResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
