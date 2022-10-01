// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINDEXINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETINDEXINGCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "getindexingconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class GetIndexingConfigurationRequest;

class GetIndexingConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    GetIndexingConfigurationRequestPrivate(const IoTRequest::Action action,
                                   GetIndexingConfigurationRequest * const q);
    GetIndexingConfigurationRequestPrivate(const GetIndexingConfigurationRequestPrivate &other,
                                   GetIndexingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIndexingConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
