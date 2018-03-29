/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTFRAGMENTSRESPONSE_H
#define QTAWS_LISTFRAGMENTSRESPONSE_H

#include "kinesisvideoarchivedmediaresponse.h"
#include "listfragmentsrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class ListFragmentsResponsePrivate;

class QTAWS_EXPORT ListFragmentsResponse : public KinesisVideoArchivedMediaResponse {
    Q_OBJECT

public:
    ListFragmentsResponse(const ListFragmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFragmentsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListFragmentsResponse)
    Q_DISABLE_COPY(ListFragmentsResponse)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
