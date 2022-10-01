// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
