// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONSREQUEST_H
#define QTAWS_GETDISTRIBUTIONSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetDistributionsRequest : public LightsailRequest {

public:
    GetDistributionsRequest(const GetDistributionsRequest &other);
    GetDistributionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
