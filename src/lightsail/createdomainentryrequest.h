// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINENTRYREQUEST_H
#define QTAWS_CREATEDOMAINENTRYREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDomainEntryRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDomainEntryRequest : public LightsailRequest {

public:
    CreateDomainEntryRequest(const CreateDomainEntryRequest &other);
    CreateDomainEntryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
