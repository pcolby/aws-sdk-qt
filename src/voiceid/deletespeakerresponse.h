// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPEAKERRESPONSE_H
#define QTAWS_DELETESPEAKERRESPONSE_H

#include "voiceidresponse.h"
#include "deletespeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteSpeakerResponsePrivate;

class QTAWSVOICEID_EXPORT DeleteSpeakerResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DeleteSpeakerResponse(const DeleteSpeakerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSpeakerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSpeakerResponse)
    Q_DISABLE_COPY(DeleteSpeakerResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
