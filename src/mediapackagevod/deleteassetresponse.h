/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_DELETEASSETRESPONSE_H
#define QTAWS_DELETEASSETRESPONSE_H

#include "mediapackagevodresponse.h"
#include "deleteassetrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeleteAssetResponsePrivate;

class QTAWS_EXPORT DeleteAssetResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    DeleteAssetResponse(const DeleteAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssetResponse)
    Q_DISABLE_COPY(DeleteAssetResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
