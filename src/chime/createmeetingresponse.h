// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGRESPONSE_H
#define QTAWS_CREATEMEETINGRESPONSE_H

#include "chimeresponse.h"
#include "createmeetingrequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingResponsePrivate;

class QTAWSCHIME_EXPORT CreateMeetingResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateMeetingResponse(const CreateMeetingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMeetingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeetingResponse)
    Q_DISABLE_COPY(CreateMeetingResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
