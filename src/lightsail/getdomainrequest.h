// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINREQUEST_H
#define QTAWS_GETDOMAINREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDomainRequest : public LightsailRequest {

public:
    GetDomainRequest(const GetDomainRequest &other);
    GetDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
