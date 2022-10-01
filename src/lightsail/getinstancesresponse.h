// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESRESPONSE_H
#define QTAWS_GETINSTANCESRESPONSE_H

#include "lightsailresponse.h"
#include "getinstancesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstancesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstancesResponse(const GetInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstancesResponse)
    Q_DISABLE_COPY(GetInstancesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
