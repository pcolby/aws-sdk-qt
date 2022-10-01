// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTINSTANCEREQUESTSRESPONSE_H
#define QTAWS_CANCELSPOTINSTANCEREQUESTSRESPONSE_H

#include "ec2response.h"
#include "cancelspotinstancerequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotInstanceRequestsResponsePrivate;

class QTAWSEC2_EXPORT CancelSpotInstanceRequestsResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelSpotInstanceRequestsResponse(const CancelSpotInstanceRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSpotInstanceRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSpotInstanceRequestsResponse)
    Q_DISABLE_COPY(CancelSpotInstanceRequestsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
