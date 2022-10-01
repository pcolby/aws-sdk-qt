// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYGROUPREQUEST_H
#define QTAWS_DELETEGATEWAYGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteGatewayGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteGatewayGroupRequest : public AlexaForBusinessRequest {

public:
    DeleteGatewayGroupRequest(const DeleteGatewayGroupRequest &other);
    DeleteGatewayGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
