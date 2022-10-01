// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYREQUEST_H
#define QTAWS_GETGATEWAYREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetGatewayRequest : public AlexaForBusinessRequest {

public:
    GetGatewayRequest(const GetGatewayRequest &other);
    GetGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
