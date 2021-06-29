/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DEPLOYSYSTEMINSTANCERESPONSE_H
#define QTAWS_DEPLOYSYSTEMINSTANCERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "deploysysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeploySystemInstanceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeploySystemInstanceResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DeploySystemInstanceResponse(const DeploySystemInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeploySystemInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeploySystemInstanceResponse)
    Q_DISABLE_COPY(DeploySystemInstanceResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
