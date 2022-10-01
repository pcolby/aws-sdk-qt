// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROBOMAKERRESPONSE_P_H
#define QTAWS_ROBOMAKERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class RoboMakerResponse;

class RoboMakerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RoboMakerResponsePrivate(RoboMakerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RoboMakerResponse)
    Q_DISABLE_COPY(RoboMakerResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
