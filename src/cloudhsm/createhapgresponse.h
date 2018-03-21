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

#ifndef QTAWS_CREATEHAPGRESPONSE_H
#define QTAWS_CREATEHAPGRESPONSE_H

#include "cloudhsmresponse.h"
#include "createhapgrequest.h"

namespace AWS {

namespace cloudhsm {

class CreateHapgResponsePrivate;

class QTAWS_EXPORT CreateHapgResponse : public CreateHapgResponse {
    Q_OBJECT

public:
    CreateHapgResponse(const CreateHapgRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHapgRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateHapgResponse)
    Q_DISABLE_COPY(CreateHapgResponse)

};

} // namespace cloudhsm
} // namespace AWS

#endif
