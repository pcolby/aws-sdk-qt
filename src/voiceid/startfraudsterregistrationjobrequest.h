// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFRAUDSTERREGISTRATIONJOBREQUEST_H
#define QTAWS_STARTFRAUDSTERREGISTRATIONJOBREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class StartFraudsterRegistrationJobRequestPrivate;

class QTAWSVOICEID_EXPORT StartFraudsterRegistrationJobRequest : public VoiceIdRequest {

public:
    StartFraudsterRegistrationJobRequest(const StartFraudsterRegistrationJobRequest &other);
    StartFraudsterRegistrationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFraudsterRegistrationJobRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
