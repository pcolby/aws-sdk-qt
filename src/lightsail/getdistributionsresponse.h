// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONSRESPONSE_H
#define QTAWS_GETDISTRIBUTIONSRESPONSE_H

#include "lightsailresponse.h"
#include "getdistributionsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDistributionsResponse(const GetDistributionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDistributionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionsResponse)
    Q_DISABLE_COPY(GetDistributionsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
