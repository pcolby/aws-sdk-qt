// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFORMATIONCLIENT_P_H
#define QTAWS_CLOUDFORMATIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudFormation {

class CloudFormationClient;

class CloudFormationClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudFormationClientPrivate(CloudFormationClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudFormationClient)
    Q_DISABLE_COPY(CloudFormationClientPrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
