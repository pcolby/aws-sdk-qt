// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGECONFIGURATIONREQUEST_P_H
#define QTAWS_PUTSTORAGECONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "putstorageconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutStorageConfigurationRequest;

class PutStorageConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    PutStorageConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   PutStorageConfigurationRequest * const q);
    PutStorageConfigurationRequestPrivate(const PutStorageConfigurationRequestPrivate &other,
                                   PutStorageConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutStorageConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
