// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTPARTICIPANTRESPONSE_P_H
#define QTAWS_CONNECTPARTICIPANTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantResponse;

class ConnectParticipantResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ConnectParticipantResponsePrivate(ConnectParticipantResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConnectParticipantResponse)
    Q_DISABLE_COPY(ConnectParticipantResponsePrivate)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
