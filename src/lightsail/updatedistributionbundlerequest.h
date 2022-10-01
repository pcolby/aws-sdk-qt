// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONBUNDLEREQUEST_H
#define QTAWS_UPDATEDISTRIBUTIONBUNDLEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionBundleRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDistributionBundleRequest : public LightsailRequest {

public:
    UpdateDistributionBundleRequest(const UpdateDistributionBundleRequest &other);
    UpdateDistributionBundleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionBundleRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
