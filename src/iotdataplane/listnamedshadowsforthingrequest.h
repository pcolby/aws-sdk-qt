// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDSHADOWSFORTHINGREQUEST_H
#define QTAWS_LISTNAMEDSHADOWSFORTHINGREQUEST_H

#include "iotdataplanerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListNamedShadowsForThingRequestPrivate;

class QTAWSIOTDATAPLANE_EXPORT ListNamedShadowsForThingRequest : public IoTDataPlaneRequest {

public:
    ListNamedShadowsForThingRequest(const ListNamedShadowsForThingRequest &other);
    ListNamedShadowsForThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamedShadowsForThingRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
