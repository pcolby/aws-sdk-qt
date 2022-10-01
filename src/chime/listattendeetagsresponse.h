// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEETAGSRESPONSE_H
#define QTAWS_LISTATTENDEETAGSRESPONSE_H

#include "chimeresponse.h"
#include "listattendeetagsrequest.h"

namespace QtAws {
namespace Chime {

class ListAttendeeTagsResponsePrivate;

class QTAWSCHIME_EXPORT ListAttendeeTagsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListAttendeeTagsResponse(const ListAttendeeTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttendeeTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttendeeTagsResponse)
    Q_DISABLE_COPY(ListAttendeeTagsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
