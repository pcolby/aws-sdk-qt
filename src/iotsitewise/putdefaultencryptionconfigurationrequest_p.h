// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "putdefaultencryptionconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutDefaultEncryptionConfigurationRequest;

class PutDefaultEncryptionConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    PutDefaultEncryptionConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   PutDefaultEncryptionConfigurationRequest * const q);
    PutDefaultEncryptionConfigurationRequestPrivate(const PutDefaultEncryptionConfigurationRequestPrivate &other,
                                   PutDefaultEncryptionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDefaultEncryptionConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
