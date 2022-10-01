// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEAKERENROLLMENTJOBRESPONSE_H
#define QTAWS_STARTSPEAKERENROLLMENTJOBRESPONSE_H

#include "voiceidresponse.h"
#include "startspeakerenrollmentjobrequest.h"

namespace QtAws {
namespace VoiceId {

class StartSpeakerEnrollmentJobResponsePrivate;

class QTAWSVOICEID_EXPORT StartSpeakerEnrollmentJobResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    StartSpeakerEnrollmentJobResponse(const StartSpeakerEnrollmentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSpeakerEnrollmentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSpeakerEnrollmentJobResponse)
    Q_DISABLE_COPY(StartSpeakerEnrollmentJobResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
