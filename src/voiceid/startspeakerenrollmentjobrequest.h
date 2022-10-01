// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSPEAKERENROLLMENTJOBREQUEST_H
#define QTAWS_STARTSPEAKERENROLLMENTJOBREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class StartSpeakerEnrollmentJobRequestPrivate;

class QTAWSVOICEID_EXPORT StartSpeakerEnrollmentJobRequest : public VoiceIdRequest {

public:
    StartSpeakerEnrollmentJobRequest(const StartSpeakerEnrollmentJobRequest &other);
    StartSpeakerEnrollmentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSpeakerEnrollmentJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
