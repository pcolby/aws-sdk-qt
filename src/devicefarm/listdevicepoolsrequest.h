// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOOLSREQUEST_H
#define QTAWS_LISTDEVICEPOOLSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDevicePoolsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListDevicePoolsRequest : public DeviceFarmRequest {

public:
    ListDevicePoolsRequest(const ListDevicePoolsRequest &other);
    ListDevicePoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicePoolsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
