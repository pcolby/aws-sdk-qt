// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELIVERCONFIGSNAPSHOTRESPONSE_P_H
#define QTAWS_DELIVERCONFIGSNAPSHOTRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeliverConfigSnapshotResponse;

class DeliverConfigSnapshotResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeliverConfigSnapshotResponsePrivate(DeliverConfigSnapshotResponse * const q);

    void parseDeliverConfigSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeliverConfigSnapshotResponse)
    Q_DISABLE_COPY(DeliverConfigSnapshotResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
