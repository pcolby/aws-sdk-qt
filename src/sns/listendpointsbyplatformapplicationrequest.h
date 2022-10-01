// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONREQUEST_H
#define QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListEndpointsByPlatformApplicationRequestPrivate;

class QTAWSSNS_EXPORT ListEndpointsByPlatformApplicationRequest : public SnsRequest {

public:
    ListEndpointsByPlatformApplicationRequest(const ListEndpointsByPlatformApplicationRequest &other);
    ListEndpointsByPlatformApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointsByPlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
