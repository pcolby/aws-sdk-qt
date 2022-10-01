// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAUDSTERRESPONSE_P_H
#define QTAWS_DELETEFRAUDSTERRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class DeleteFraudsterResponse;

class DeleteFraudsterResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit DeleteFraudsterResponsePrivate(DeleteFraudsterResponse * const q);

    void parseDeleteFraudsterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFraudsterResponse)
    Q_DISABLE_COPY(DeleteFraudsterResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
