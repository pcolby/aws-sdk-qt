/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
