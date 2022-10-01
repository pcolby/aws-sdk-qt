// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSITEWISECLIENT_P_H
#define QTAWS_IOTSITEWISECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTSiteWise {

class IoTSiteWiseClient;

class IoTSiteWiseClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTSiteWiseClientPrivate(IoTSiteWiseClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTSiteWiseClient)
    Q_DISABLE_COPY(IoTSiteWiseClientPrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
