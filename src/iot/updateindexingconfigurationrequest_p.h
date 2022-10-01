// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXINGCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEINDEXINGCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "updateindexingconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class UpdateIndexingConfigurationRequest;

class UpdateIndexingConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    UpdateIndexingConfigurationRequestPrivate(const IoTRequest::Action action,
                                   UpdateIndexingConfigurationRequest * const q);
    UpdateIndexingConfigurationRequestPrivate(const UpdateIndexingConfigurationRequestPrivate &other,
                                   UpdateIndexingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIndexingConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
