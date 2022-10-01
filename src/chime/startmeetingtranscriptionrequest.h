// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEETINGTRANSCRIPTIONREQUEST_H
#define QTAWS_STARTMEETINGTRANSCRIPTIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class StartMeetingTranscriptionRequestPrivate;

class QTAWSCHIME_EXPORT StartMeetingTranscriptionRequest : public ChimeRequest {

public:
    StartMeetingTranscriptionRequest(const StartMeetingTranscriptionRequest &other);
    StartMeetingTranscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMeetingTranscriptionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
