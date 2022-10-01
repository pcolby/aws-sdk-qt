// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITIESRESPONSE_H
#define QTAWS_GETENTITIESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getentitiesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetEntitiesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetEntitiesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetEntitiesResponse(const GetEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntitiesResponse)
    Q_DISABLE_COPY(GetEntitiesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
