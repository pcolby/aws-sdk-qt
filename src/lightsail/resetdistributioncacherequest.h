// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDISTRIBUTIONCACHEREQUEST_H
#define QTAWS_RESETDISTRIBUTIONCACHEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class ResetDistributionCacheRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT ResetDistributionCacheRequest : public LightsailRequest {

public:
    ResetDistributionCacheRequest(const ResetDistributionCacheRequest &other);
    ResetDistributionCacheRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDistributionCacheRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
