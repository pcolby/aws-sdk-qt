// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
