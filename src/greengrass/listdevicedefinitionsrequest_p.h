// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONSREQUEST_P_H
#define QTAWS_LISTDEVICEDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listdevicedefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionsRequest;

class ListDeviceDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListDeviceDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListDeviceDefinitionsRequest * const q);
    ListDeviceDefinitionsRequestPrivate(const ListDeviceDefinitionsRequestPrivate &other,
                                   ListDeviceDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
