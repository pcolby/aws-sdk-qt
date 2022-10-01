// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEDELETIONSTATUSREQUEST_H
#define QTAWS_GETNAMESPACEDELETIONSTATUSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetNamespaceDeletionStatusRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetNamespaceDeletionStatusRequest : public IoTThingsGraphRequest {

public:
    GetNamespaceDeletionStatusRequest(const GetNamespaceDeletionStatusRequest &other);
    GetNamespaceDeletionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamespaceDeletionStatusRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
