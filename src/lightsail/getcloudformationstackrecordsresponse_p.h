// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONSTACKRECORDSRESPONSE_P_H
#define QTAWS_GETCLOUDFORMATIONSTACKRECORDSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetCloudFormationStackRecordsResponse;

class GetCloudFormationStackRecordsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetCloudFormationStackRecordsResponsePrivate(GetCloudFormationStackRecordsResponse * const q);

    void parseGetCloudFormationStackRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCloudFormationStackRecordsResponse)
    Q_DISABLE_COPY(GetCloudFormationStackRecordsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
