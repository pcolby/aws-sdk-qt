// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3CONTROLCLIENT_P_H
#define QTAWS_S3CONTROLCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace S3Control {

class S3ControlClient;

class S3ControlClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit S3ControlClientPrivate(S3ControlClient * const q);

private:
    Q_DECLARE_PUBLIC(S3ControlClient)
    Q_DISABLE_COPY(S3ControlClientPrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
