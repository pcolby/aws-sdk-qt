// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEDELETIONSTATUSRESPONSE_H
#define QTAWS_GETNAMESPACEDELETIONSTATUSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getnamespacedeletionstatusrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetNamespaceDeletionStatusResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetNamespaceDeletionStatusResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetNamespaceDeletionStatusResponse(const GetNamespaceDeletionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNamespaceDeletionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamespaceDeletionStatusResponse)
    Q_DISABLE_COPY(GetNamespaceDeletionStatusResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
