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

#ifndef QTAWS_PUTINTENTRESPONSE_H
#define QTAWS_PUTINTENTRESPONSE_H

#include "lex-modelsresponse.h"
#include "putintentrequest.h"

namespace AWS {

namespace lex-models {

class PutIntentResponsePrivate;

class QTAWS_EXPORT PutIntentResponse : public PutIntentResponse {
    Q_OBJECT

public:
    PutIntentResponse(const PutIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutIntentRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(PutIntentResponse)
    Q_DISABLE_COPY(PutIntentResponse)

};

} // namespace lex-models
} // namespace AWS

#endif
