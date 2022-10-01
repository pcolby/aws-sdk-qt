// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGIONSRESPONSE_H
#define QTAWS_GETREGIONSRESPONSE_H

#include "lightsailresponse.h"
#include "getregionsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRegionsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRegionsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRegionsResponse(const GetRegionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegionsResponse)
    Q_DISABLE_COPY(GetRegionsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
