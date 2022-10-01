// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSREQUEST_H
#define QTAWS_LISTTHINGGROUPSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsRequestPrivate;

class QTAWSIOT_EXPORT ListThingGroupsRequest : public IoTRequest {

public:
    ListThingGroupsRequest(const ListThingGroupsRequest &other);
    ListThingGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingGroupsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
