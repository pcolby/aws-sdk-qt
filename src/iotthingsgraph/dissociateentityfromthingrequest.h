// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEENTITYFROMTHINGREQUEST_H
#define QTAWS_DISSOCIATEENTITYFROMTHINGREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DissociateEntityFromThingRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT DissociateEntityFromThingRequest : public IoTThingsGraphRequest {

public:
    DissociateEntityFromThingRequest(const DissociateEntityFromThingRequest &other);
    DissociateEntityFromThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DissociateEntityFromThingRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
