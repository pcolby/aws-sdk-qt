// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTOUTSPEAKERRESPONSE_H
#define QTAWS_OPTOUTSPEAKERRESPONSE_H

#include "voiceidresponse.h"
#include "optoutspeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class OptOutSpeakerResponsePrivate;

class QTAWSVOICEID_EXPORT OptOutSpeakerResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    OptOutSpeakerResponse(const OptOutSpeakerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const OptOutSpeakerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OptOutSpeakerResponse)
    Q_DISABLE_COPY(OptOutSpeakerResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
