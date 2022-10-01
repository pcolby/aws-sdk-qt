// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAGMENTSRESPONSE_P_H
#define QTAWS_LISTFRAGMENTSRESPONSE_P_H

#include "kinesisvideoarchivedmediaresponse_p.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class ListFragmentsResponse;

class ListFragmentsResponsePrivate : public KinesisVideoArchivedMediaResponsePrivate {

public:

    explicit ListFragmentsResponsePrivate(ListFragmentsResponse * const q);

    void parseListFragmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFragmentsResponse)
    Q_DISABLE_COPY(ListFragmentsResponsePrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
