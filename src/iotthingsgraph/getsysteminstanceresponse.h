// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMINSTANCERESPONSE_H
#define QTAWS_GETSYSTEMINSTANCERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getsysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemInstanceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemInstanceResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetSystemInstanceResponse(const GetSystemInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSystemInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemInstanceResponse)
    Q_DISABLE_COPY(GetSystemInstanceResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
