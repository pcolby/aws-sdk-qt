// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYGROUPREQUEST_H
#define QTAWS_GETGATEWAYGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetGatewayGroupRequest : public AlexaForBusinessRequest {

public:
    GetGatewayGroupRequest(const GetGatewayGroupRequest &other);
    GetGatewayGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
