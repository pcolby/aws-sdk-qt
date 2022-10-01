// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTREQUEST_H
#define QTAWS_GETTRANSCRIPTREQUEST_H

#include "connectparticipantrequest.h"

namespace QtAws {
namespace ConnectParticipant {

class GetTranscriptRequestPrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT GetTranscriptRequest : public ConnectParticipantRequest {

public:
    GetTranscriptRequest(const GetTranscriptRequest &other);
    GetTranscriptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTranscriptRequest)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
