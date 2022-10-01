// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONREQUEST_H
#define QTAWS_CREATEDISTRIBUTIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDistributionRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDistributionRequest : public LightsailRequest {

public:
    CreateDistributionRequest(const CreateDistributionRequest &other);
    CreateDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
