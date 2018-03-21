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

#ifndef QTAWS_UPDATEALIASRESPONSE_H
#define QTAWS_UPDATEALIASRESPONSE_H

#include "lambdaresponse.h"
#include "updatealiasrequest.h"

namespace AWS {

namespace lambda {

class UpdateAliasResponsePrivate;

class QTAWS_EXPORT UpdateAliasResponse : public UpdateAliasResponse {
    Q_OBJECT

public:
    UpdateAliasResponse(const UpdateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAliasRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateAliasResponse)
    Q_DISABLE_COPY(UpdateAliasResponse)

};

} // namespace lambda
} // namespace AWS

#endif
