// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERENROLLMENTJOBRESPONSE_H
#define QTAWS_DESCRIBESPEAKERENROLLMENTJOBRESPONSE_H

#include "voiceidresponse.h"
#include "describespeakerenrollmentjobrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerEnrollmentJobResponsePrivate;

class QTAWSVOICEID_EXPORT DescribeSpeakerEnrollmentJobResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DescribeSpeakerEnrollmentJobResponse(const DescribeSpeakerEnrollmentJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpeakerEnrollmentJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpeakerEnrollmentJobResponse)
    Q_DISABLE_COPY(DescribeSpeakerEnrollmentJobResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
