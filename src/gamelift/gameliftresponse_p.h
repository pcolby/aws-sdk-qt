// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GAMELIFTRESPONSE_P_H
#define QTAWS_GAMELIFTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GameLift {

class GameLiftResponse;

class GameLiftResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GameLiftResponsePrivate(GameLiftResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GameLiftResponse)
    Q_DISABLE_COPY(GameLiftResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
