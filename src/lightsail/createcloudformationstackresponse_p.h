// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONSTACKRESPONSE_P_H
#define QTAWS_CREATECLOUDFORMATIONSTACKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateCloudFormationStackResponse;

class CreateCloudFormationStackResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateCloudFormationStackResponsePrivate(CreateCloudFormationStackResponse * const q);

    void parseCreateCloudFormationStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationStackResponse)
    Q_DISABLE_COPY(CreateCloudFormationStackResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
