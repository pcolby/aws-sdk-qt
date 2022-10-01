// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDSHADOWSFORTHINGRESPONSE_H
#define QTAWS_LISTNAMEDSHADOWSFORTHINGRESPONSE_H

#include "iotdataplaneresponse.h"
#include "listnamedshadowsforthingrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListNamedShadowsForThingResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT ListNamedShadowsForThingResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    ListNamedShadowsForThingResponse(const ListNamedShadowsForThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNamedShadowsForThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamedShadowsForThingResponse)
    Q_DISABLE_COPY(ListNamedShadowsForThingResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
