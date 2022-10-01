// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYGROUPREQUEST_H
#define QTAWS_CREATEGATEWAYGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateGatewayGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateGatewayGroupRequest : public AlexaForBusinessRequest {

public:
    CreateGatewayGroupRequest(const CreateGatewayGroupRequest &other);
    CreateGatewayGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
