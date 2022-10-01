// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORENTITIESREQUEST_H
#define QTAWS_LISTCONNECTORENTITIESREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class ListConnectorEntitiesRequestPrivate;

class QTAWSAPPFLOW_EXPORT ListConnectorEntitiesRequest : public AppflowRequest {

public:
    ListConnectorEntitiesRequest(const ListConnectorEntitiesRequest &other);
    ListConnectorEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorEntitiesRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
