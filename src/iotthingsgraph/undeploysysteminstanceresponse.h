// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPLOYSYSTEMINSTANCERESPONSE_H
#define QTAWS_UNDEPLOYSYSTEMINSTANCERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "undeploysysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UndeploySystemInstanceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UndeploySystemInstanceResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    UndeploySystemInstanceResponse(const UndeploySystemInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UndeploySystemInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeploySystemInstanceResponse)
    Q_DISABLE_COPY(UndeploySystemInstanceResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
