// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINREQUEST_H
#define QTAWS_CREATEDOMAINREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDomainRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDomainRequest : public LightsailRequest {

public:
    CreateDomainRequest(const CreateDomainRequest &other);
    CreateDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
