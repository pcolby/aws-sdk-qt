/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclustersubnetgrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSubnetGroupResponsePrivate;

class QTAWS_EXPORT ModifyClusterSubnetGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterSubnetGroupResponse(const ModifyClusterSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterSubnetGroupRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ModifyClusterSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyClusterSubnetGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
