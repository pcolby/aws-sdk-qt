// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONREQUEST_H
#define QTAWS_DELETEDISTRIBUTIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDistributionRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDistributionRequest : public LightsailRequest {

public:
    DeleteDistributionRequest(const DeleteDistributionRequest &other);
    DeleteDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
