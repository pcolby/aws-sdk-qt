// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTREQUEST_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeContentRequestPrivate;

class QTAWSEC2_EXPORT GetNetworkInsightsAccessScopeContentRequest : public Ec2Request {

public:
    GetNetworkInsightsAccessScopeContentRequest(const GetNetworkInsightsAccessScopeContentRequest &other);
    GetNetworkInsightsAccessScopeContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkInsightsAccessScopeContentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
