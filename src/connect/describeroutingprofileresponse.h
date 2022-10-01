// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGPROFILERESPONSE_H
#define QTAWS_DESCRIBEROUTINGPROFILERESPONSE_H

#include "connectresponse.h"
#include "describeroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class DescribeRoutingProfileResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeRoutingProfileResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeRoutingProfileResponse(const DescribeRoutingProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRoutingProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRoutingProfileResponse)
    Q_DISABLE_COPY(DescribeRoutingProfileResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
