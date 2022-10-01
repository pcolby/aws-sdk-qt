// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTFLEETREQUESTSRESPONSE_H
#define QTAWS_CANCELSPOTFLEETREQUESTSRESPONSE_H

#include "ec2response.h"
#include "cancelspotfleetrequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotFleetRequestsResponsePrivate;

class QTAWSEC2_EXPORT CancelSpotFleetRequestsResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelSpotFleetRequestsResponse(const CancelSpotFleetRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSpotFleetRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSpotFleetRequestsResponse)
    Q_DISABLE_COPY(CancelSpotFleetRequestsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
