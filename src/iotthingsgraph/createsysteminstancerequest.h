// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMINSTANCEREQUEST_H
#define QTAWS_CREATESYSTEMINSTANCEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemInstanceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT CreateSystemInstanceRequest : public IoTThingsGraphRequest {

public:
    CreateSystemInstanceRequest(const CreateSystemInstanceRequest &other);
    CreateSystemInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
