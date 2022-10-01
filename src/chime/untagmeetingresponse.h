// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMEETINGRESPONSE_H
#define QTAWS_UNTAGMEETINGRESPONSE_H

#include "chimeresponse.h"
#include "untagmeetingrequest.h"

namespace QtAws {
namespace Chime {

class UntagMeetingResponsePrivate;

class QTAWSCHIME_EXPORT UntagMeetingResponse : public ChimeResponse {
    Q_OBJECT

public:
    UntagMeetingResponse(const UntagMeetingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagMeetingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagMeetingResponse)
    Q_DISABLE_COPY(UntagMeetingResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
