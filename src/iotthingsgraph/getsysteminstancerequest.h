// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMINSTANCEREQUEST_H
#define QTAWS_GETSYSTEMINSTANCEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemInstanceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetSystemInstanceRequest : public IoTThingsGraphRequest {

public:
    GetSystemInstanceRequest(const GetSystemInstanceRequest &other);
    GetSystemInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
