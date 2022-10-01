// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESREQUEST_H
#define QTAWS_CREATEINSTANCESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstancesRequest : public LightsailRequest {

public:
    CreateInstancesRequest(const CreateInstancesRequest &other);
    CreateInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstancesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
