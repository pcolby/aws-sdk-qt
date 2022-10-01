// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICESREQUEST_H
#define QTAWS_GETCONTAINERSERVICESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServicesRequest : public LightsailRequest {

public:
    GetContainerServicesRequest(const GetContainerServicesRequest &other);
    GetContainerServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServicesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
