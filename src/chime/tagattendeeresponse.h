// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGATTENDEERESPONSE_H
#define QTAWS_TAGATTENDEERESPONSE_H

#include "chimeresponse.h"
#include "tagattendeerequest.h"

namespace QtAws {
namespace Chime {

class TagAttendeeResponsePrivate;

class QTAWSCHIME_EXPORT TagAttendeeResponse : public ChimeResponse {
    Q_OBJECT

public:
    TagAttendeeResponse(const TagAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagAttendeeResponse)
    Q_DISABLE_COPY(TagAttendeeResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
