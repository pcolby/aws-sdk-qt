// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREQUEST_H
#define QTAWS_CREATECONTAINERSERVICEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceRequest : public LightsailRequest {

public:
    CreateContainerServiceRequest(const CreateContainerServiceRequest &other);
    CreateContainerServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
