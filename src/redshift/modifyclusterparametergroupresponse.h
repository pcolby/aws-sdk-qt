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

#ifndef QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_MODIFYCLUSTERPARAMETERGROUPRESPONSE_H

#include "redshiftresponse.h"
#include "modifyclusterparametergrouprequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterParameterGroupResponsePrivate;

class QTAWS_EXPORT ModifyClusterParameterGroupResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyClusterParameterGroupResponse(const ModifyClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClusterParameterGroupRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ModifyClusterParameterGroupResponse)
    Q_DISABLE_COPY(ModifyClusterParameterGroupResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
