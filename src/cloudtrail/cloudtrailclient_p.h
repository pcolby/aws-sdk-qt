// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDTRAILCLIENT_P_H
#define QTAWS_CLOUDTRAILCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudTrail {

class CloudTrailClient;

class CloudTrailClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudTrailClientPrivate(CloudTrailClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudTrailClient)
    Q_DISABLE_COPY(CloudTrailClientPrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
