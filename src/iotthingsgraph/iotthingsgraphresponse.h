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

#ifndef QTAWS_IOTTHINGSGRAPHRESPONSE_H
#define QTAWS_IOTTHINGSGRAPHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotthingsgraphglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT IoTThingsGraphResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTThingsGraphResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTThingsGraphResponsePrivate * const d_ptr; ///< Internal d-pointer.
    IoTThingsGraphResponse(IoTThingsGraphResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTThingsGraphResponse)
    Q_DISABLE_COPY(IoTThingsGraphResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
