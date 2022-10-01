// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSREQUEST_H
#define QTAWS_GETDOMAINSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDomainsRequest : public LightsailRequest {

public:
    GetDomainsRequest(const GetDomainsRequest &other);
    GetDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
