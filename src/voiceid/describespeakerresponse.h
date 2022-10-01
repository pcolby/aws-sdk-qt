// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERRESPONSE_H
#define QTAWS_DESCRIBESPEAKERRESPONSE_H

#include "voiceidresponse.h"
#include "describespeakerrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerResponsePrivate;

class QTAWSVOICEID_EXPORT DescribeSpeakerResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DescribeSpeakerResponse(const DescribeSpeakerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpeakerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpeakerResponse)
    Q_DISABLE_COPY(DescribeSpeakerResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
