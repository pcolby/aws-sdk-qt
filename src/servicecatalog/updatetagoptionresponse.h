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

#ifndef QTAWS_UPDATETAGOPTIONRESPONSE_H
#define QTAWS_UPDATETAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "updatetagoptionrequest.h"

namespace AWS {

namespace servicecatalog {

class UpdateTagOptionResponsePrivate;

class QTAWS_EXPORT UpdateTagOptionResponse : public UpdateTagOptionResponse {
    Q_OBJECT

public:
    UpdateTagOptionResponse(const UpdateTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTagOptionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateTagOptionResponse)
    Q_DISABLE_COPY(UpdateTagOptionResponse)

};

} // namespace servicecatalog
} // namespace AWS

#endif
