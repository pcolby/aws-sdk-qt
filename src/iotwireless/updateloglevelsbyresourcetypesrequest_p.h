// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGLEVELSBYRESOURCETYPESREQUEST_P_H
#define QTAWS_UPDATELOGLEVELSBYRESOURCETYPESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updateloglevelsbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateLogLevelsByResourceTypesRequest;

class UpdateLogLevelsByResourceTypesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateLogLevelsByResourceTypesRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateLogLevelsByResourceTypesRequest * const q);
    UpdateLogLevelsByResourceTypesRequestPrivate(const UpdateLogLevelsByResourceTypesRequestPrivate &other,
                                   UpdateLogLevelsByResourceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLogLevelsByResourceTypesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
