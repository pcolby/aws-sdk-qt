// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELIVERCONFIGSNAPSHOTRESPONSE_H
#define QTAWS_DELIVERCONFIGSNAPSHOTRESPONSE_H

#include "configserviceresponse.h"
#include "deliverconfigsnapshotrequest.h"

namespace QtAws {
namespace ConfigService {

class DeliverConfigSnapshotResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeliverConfigSnapshotResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeliverConfigSnapshotResponse(const DeliverConfigSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeliverConfigSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeliverConfigSnapshotResponse)
    Q_DISABLE_COPY(DeliverConfigSnapshotResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
