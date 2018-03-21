/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STARTIMAGEBUILDERRESPONSE_H
#define QTAWS_STARTIMAGEBUILDERRESPONSE_H

#include "appstreamresponse.h"
#include "startimagebuilderrequest.h"

namespace AWS {

namespace appstream {

class StartImageBuilderResponsePrivate;

class QTAWS_EXPORT StartImageBuilderResponse : public StartImageBuilderResponse {
    Q_OBJECT

public:
    StartImageBuilderResponse(const StartImageBuilderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImageBuilderRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(StartImageBuilderResponse)
    Q_DISABLE_COPY(StartImageBuilderResponse)

};

} // namespace appstream
} // namespace AWS

#endif
