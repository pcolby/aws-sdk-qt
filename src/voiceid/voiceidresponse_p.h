// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDRESPONSE_P_H
#define QTAWS_VOICEIDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace VoiceId {

class VoiceIdResponse;

class VoiceIdResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit VoiceIdResponsePrivate(VoiceIdResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VoiceIdResponse)
    Q_DISABLE_COPY(VoiceIdResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
