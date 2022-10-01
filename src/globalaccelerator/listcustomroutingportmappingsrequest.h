// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSREQUEST_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingPortMappingsRequest : public GlobalAcceleratorRequest {

public:
    ListCustomRoutingPortMappingsRequest(const ListCustomRoutingPortMappingsRequest &other);
    ListCustomRoutingPortMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingPortMappingsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
