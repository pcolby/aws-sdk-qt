// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPLOYSYSTEMINSTANCEREQUEST_H
#define QTAWS_UNDEPLOYSYSTEMINSTANCEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UndeploySystemInstanceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT UndeploySystemInstanceRequest : public IoTThingsGraphRequest {

public:
    UndeploySystemInstanceRequest(const UndeploySystemInstanceRequest &other);
    UndeploySystemInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeploySystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
