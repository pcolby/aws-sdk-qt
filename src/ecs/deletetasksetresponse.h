/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DELETETASKSETRESPONSE_H
#define QTAWS_DELETETASKSETRESPONSE_H

#include "ecsresponse.h"
#include "deletetasksetrequest.h"

namespace QtAws {
namespace ECS {

class DeleteTaskSetResponsePrivate;

class QTAWS_EXPORT DeleteTaskSetResponse : public EcsResponse {
    Q_OBJECT

public:
    DeleteTaskSetResponse(const DeleteTaskSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTaskSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskSetResponse)
    Q_DISABLE_COPY(DeleteTaskSetResponse)

};

} // namespace ECS
} // namespace QtAws

#endif
