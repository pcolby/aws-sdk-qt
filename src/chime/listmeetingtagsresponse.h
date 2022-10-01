// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGTAGSRESPONSE_H
#define QTAWS_LISTMEETINGTAGSRESPONSE_H

#include "chimeresponse.h"
#include "listmeetingtagsrequest.h"

namespace QtAws {
namespace Chime {

class ListMeetingTagsResponsePrivate;

class QTAWSCHIME_EXPORT ListMeetingTagsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListMeetingTagsResponse(const ListMeetingTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMeetingTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMeetingTagsResponse)
    Q_DISABLE_COPY(ListMeetingTagsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
