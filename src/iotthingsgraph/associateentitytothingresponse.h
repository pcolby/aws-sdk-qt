// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITYTOTHINGRESPONSE_H
#define QTAWS_ASSOCIATEENTITYTOTHINGRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "associateentitytothingrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class AssociateEntityToThingResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT AssociateEntityToThingResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    AssociateEntityToThingResponse(const AssociateEntityToThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateEntityToThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEntityToThingResponse)
    Q_DISABLE_COPY(AssociateEntityToThingResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
