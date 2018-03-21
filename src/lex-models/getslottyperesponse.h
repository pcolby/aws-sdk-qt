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

#ifndef QTAWS_GETSLOTTYPERESPONSE_H
#define QTAWS_GETSLOTTYPERESPONSE_H

#include "lex-modelsresponse.h"
#include "getslottyperequest.h"

namespace AWS {

namespace lex-models {

class GetSlotTypeResponsePrivate;

class QTAWS_EXPORT GetSlotTypeResponse : public GetSlotTypeResponse {
    Q_OBJECT

public:
    GetSlotTypeResponse(const GetSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSlotTypeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetSlotTypeResponse)
    Q_DISABLE_COPY(GetSlotTypeResponse)

};

} // namespace lex-models
} // namespace AWS

#endif
