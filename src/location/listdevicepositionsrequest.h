// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOSITIONSREQUEST_H
#define QTAWS_LISTDEVICEPOSITIONSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListDevicePositionsRequestPrivate;

class QTAWSLOCATION_EXPORT ListDevicePositionsRequest : public LocationRequest {

public:
    ListDevicePositionsRequest(const ListDevicePositionsRequest &other);
    ListDevicePositionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicePositionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
