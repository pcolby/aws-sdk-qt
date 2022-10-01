// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEETINGSRESPONSE_P_H
#define QTAWS_CHIMESDKMEETINGSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class ChimeSdkMeetingsResponse;

class ChimeSdkMeetingsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ChimeSdkMeetingsResponsePrivate(ChimeSdkMeetingsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMeetingsResponse)
    Q_DISABLE_COPY(ChimeSdkMeetingsResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
