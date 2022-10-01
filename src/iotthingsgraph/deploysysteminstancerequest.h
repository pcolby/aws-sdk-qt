// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPLOYSYSTEMINSTANCEREQUEST_H
#define QTAWS_DEPLOYSYSTEMINSTANCEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeploySystemInstanceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeploySystemInstanceRequest : public IoTThingsGraphRequest {

public:
    DeploySystemInstanceRequest(const DeploySystemInstanceRequest &other);
    DeploySystemInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeploySystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
