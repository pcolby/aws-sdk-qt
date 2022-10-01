// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEENTITYFROMTHINGRESPONSE_H
#define QTAWS_DISSOCIATEENTITYFROMTHINGRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "dissociateentityfromthingrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DissociateEntityFromThingResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DissociateEntityFromThingResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    DissociateEntityFromThingResponse(const DissociateEntityFromThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DissociateEntityFromThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DissociateEntityFromThingResponse)
    Q_DISABLE_COPY(DissociateEntityFromThingResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
