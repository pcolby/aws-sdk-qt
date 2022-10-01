// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGSRESPONSE_H
#define QTAWS_LISTMEETINGSRESPONSE_H

#include "chimeresponse.h"
#include "listmeetingsrequest.h"

namespace QtAws {
namespace Chime {

class ListMeetingsResponsePrivate;

class QTAWSCHIME_EXPORT ListMeetingsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListMeetingsResponse(const ListMeetingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMeetingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMeetingsResponse)
    Q_DISABLE_COPY(ListMeetingsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
