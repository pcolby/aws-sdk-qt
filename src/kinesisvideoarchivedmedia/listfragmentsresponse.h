// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAGMENTSRESPONSE_H
#define QTAWS_LISTFRAGMENTSRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "listfragmentsrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class ListFragmentsResponsePrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT ListFragmentsResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    ListFragmentsResponse(const ListFragmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFragmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFragmentsResponse)
    Q_DISABLE_COPY(ListFragmentsResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
