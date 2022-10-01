// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LIGHTSAILRESPONSE_P_H
#define QTAWS_LIGHTSAILRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Lightsail {

class LightsailResponse;

class LightsailResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LightsailResponsePrivate(LightsailResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LightsailResponse)
    Q_DISABLE_COPY(LightsailResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
