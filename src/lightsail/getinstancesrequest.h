// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESREQUEST_H
#define QTAWS_GETINSTANCESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstancesRequest : public LightsailRequest {

public:
    GetInstancesRequest(const GetInstancesRequest &other);
    GetInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstancesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
