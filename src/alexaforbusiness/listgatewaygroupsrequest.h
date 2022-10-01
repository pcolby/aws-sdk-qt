// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYGROUPSREQUEST_H
#define QTAWS_LISTGATEWAYGROUPSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListGatewayGroupsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListGatewayGroupsRequest : public AlexaForBusinessRequest {

public:
    ListGatewayGroupsRequest(const ListGatewayGroupsRequest &other);
    ListGatewayGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewayGroupsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
