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

#ifndef QTAWS_CREATEHITRESPONSE_H
#define QTAWS_CREATEHITRESPONSE_H

#include "mturkresponse.h"
#include "createhitrequest.h"

namespace AWS {

namespace MTurk {

class CreateHITResponsePrivate;

class QTAWS_EXPORT CreateHITResponse : public CreateHITResponse {
    Q_OBJECT

public:
    CreateHITResponse(const CreateHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHITRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateHITResponse)
    Q_DISABLE_COPY(CreateHITResponse)

};

} // namespace MTurk
} // namespace AWS

#endif
