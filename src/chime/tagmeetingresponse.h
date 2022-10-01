// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMEETINGRESPONSE_H
#define QTAWS_TAGMEETINGRESPONSE_H

#include "chimeresponse.h"
#include "tagmeetingrequest.h"

namespace QtAws {
namespace Chime {

class TagMeetingResponsePrivate;

class QTAWSCHIME_EXPORT TagMeetingResponse : public ChimeResponse {
    Q_OBJECT

public:
    TagMeetingResponse(const TagMeetingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagMeetingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagMeetingResponse)
    Q_DISABLE_COPY(TagMeetingResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
