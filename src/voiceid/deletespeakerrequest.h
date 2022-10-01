// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPEAKERREQUEST_H
#define QTAWS_DELETESPEAKERREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteSpeakerRequestPrivate;

class QTAWSVOICEID_EXPORT DeleteSpeakerRequest : public VoiceIdRequest {

public:
    DeleteSpeakerRequest(const DeleteSpeakerRequest &other);
    DeleteSpeakerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
