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

#ifndef QTAWS_DELETESTATEMACHINERESPONSE_H
#define QTAWS_DELETESTATEMACHINERESPONSE_H

#include "sfnresponse.h"
#include "deletestatemachinerequest.h"

namespace AWS {

namespace SFN {

class DeleteStateMachineResponsePrivate;

class QTAWS_EXPORT DeleteStateMachineResponse : public DeleteStateMachineResponse {
    Q_OBJECT

public:
    DeleteStateMachineResponse(const DeleteStateMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStateMachineRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteStateMachineResponse)
    Q_DISABLE_COPY(DeleteStateMachineResponse)

};

} // namespace SFN
} // namespace AWS

#endif
