// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTINSTANCESRESPONSE_H
#define QTAWS_REQUESTSPOTINSTANCESRESPONSE_H

#include "ec2response.h"
#include "requestspotinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotInstancesResponsePrivate;

class QTAWSEC2_EXPORT RequestSpotInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    RequestSpotInstancesResponse(const RequestSpotInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestSpotInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestSpotInstancesResponse)
    Q_DISABLE_COPY(RequestSpotInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
