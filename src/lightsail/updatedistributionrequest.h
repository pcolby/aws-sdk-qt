// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONREQUEST_H
#define QTAWS_UPDATEDISTRIBUTIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDistributionRequest : public LightsailRequest {

public:
    UpdateDistributionRequest(const UpdateDistributionRequest &other);
    UpdateDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
