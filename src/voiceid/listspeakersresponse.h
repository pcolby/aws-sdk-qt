// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERSRESPONSE_H
#define QTAWS_LISTSPEAKERSRESPONSE_H

#include "voiceidresponse.h"
#include "listspeakersrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakersResponsePrivate;

class QTAWSVOICEID_EXPORT ListSpeakersResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    ListSpeakersResponse(const ListSpeakersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSpeakersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeakersResponse)
    Q_DISABLE_COPY(ListSpeakersResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
