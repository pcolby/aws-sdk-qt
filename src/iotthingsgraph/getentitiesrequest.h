// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITIESREQUEST_H
#define QTAWS_GETENTITIESREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetEntitiesRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetEntitiesRequest : public IoTThingsGraphRequest {

public:
    GetEntitiesRequest(const GetEntitiesRequest &other);
    GetEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntitiesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
