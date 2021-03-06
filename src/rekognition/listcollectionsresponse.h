/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_LISTCOLLECTIONSRESPONSE_H
#define QTAWS_LISTCOLLECTIONSRESPONSE_H

#include "rekognitionresponse.h"
#include "listcollectionsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListCollectionsResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListCollectionsResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListCollectionsResponse(const ListCollectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCollectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCollectionsResponse)
    Q_DISABLE_COPY(ListCollectionsResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
