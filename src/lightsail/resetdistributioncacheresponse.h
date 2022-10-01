// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDISTRIBUTIONCACHERESPONSE_H
#define QTAWS_RESETDISTRIBUTIONCACHERESPONSE_H

#include "lightsailresponse.h"
#include "resetdistributioncacherequest.h"

namespace QtAws {
namespace Lightsail {

class ResetDistributionCacheResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT ResetDistributionCacheResponse : public LightsailResponse {
    Q_OBJECT

public:
    ResetDistributionCacheResponse(const ResetDistributionCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetDistributionCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDistributionCacheResponse)
    Q_DISABLE_COPY(ResetDistributionCacheResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
