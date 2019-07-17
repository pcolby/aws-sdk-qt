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

#ifndef QTAWS_MODIFYOPTIONGROUPRESPONSE_H
#define QTAWS_MODIFYOPTIONGROUPRESPONSE_H

#include "rdsresponse.h"
#include "modifyoptiongrouprequest.h"

namespace QtAws {
namespace RDS {

class ModifyOptionGroupResponsePrivate;

class QTAWS_EXPORT ModifyOptionGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyOptionGroupResponse(const ModifyOptionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyOptionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyOptionGroupResponse)
    Q_DISABLE_COPY(ModifyOptionGroupResponse)

};

} // namespace RDS
} // namespace QtAws

#endif
