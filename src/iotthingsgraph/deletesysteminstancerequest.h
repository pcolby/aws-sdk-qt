// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMINSTANCEREQUEST_H
#define QTAWS_DELETESYSTEMINSTANCEREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemInstanceRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DeleteSystemInstanceRequest : public IoTThingsGraphRequest {

public:
    DeleteSystemInstanceRequest(const DeleteSystemInstanceRequest &other);
    DeleteSystemInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSystemInstanceRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
