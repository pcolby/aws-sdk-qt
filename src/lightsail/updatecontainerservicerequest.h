// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERSERVICEREQUEST_H
#define QTAWS_UPDATECONTAINERSERVICEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateContainerServiceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateContainerServiceRequest : public LightsailRequest {

public:
    UpdateContainerServiceRequest(const UpdateContainerServiceRequest &other);
    UpdateContainerServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
