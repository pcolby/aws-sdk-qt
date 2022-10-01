// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINENTRYREQUEST_H
#define QTAWS_DELETEDOMAINENTRYREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDomainEntryRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDomainEntryRequest : public LightsailRequest {

public:
    DeleteDomainEntryRequest(const DeleteDomainEntryRequest &other);
    DeleteDomainEntryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainEntryRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
