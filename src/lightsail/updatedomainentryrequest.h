// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENTRYREQUEST_H
#define QTAWS_UPDATEDOMAINENTRYREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDomainEntryRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDomainEntryRequest : public LightsailRequest {

public:
    UpdateDomainEntryRequest(const UpdateDomainEntryRequest &other);
    UpdateDomainEntryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
