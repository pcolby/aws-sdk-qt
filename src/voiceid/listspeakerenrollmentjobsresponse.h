// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERENROLLMENTJOBSRESPONSE_H
#define QTAWS_LISTSPEAKERENROLLMENTJOBSRESPONSE_H

#include "voiceidresponse.h"
#include "listspeakerenrollmentjobsrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakerEnrollmentJobsResponsePrivate;

class QTAWSVOICEID_EXPORT ListSpeakerEnrollmentJobsResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    ListSpeakerEnrollmentJobsResponse(const ListSpeakerEnrollmentJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSpeakerEnrollmentJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeakerEnrollmentJobsResponse)
    Q_DISABLE_COPY(ListSpeakerEnrollmentJobsResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
