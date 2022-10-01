// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISCLIENT_P_H
#define QTAWS_KINESISCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Kinesis {

class KinesisClient;

class KinesisClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisClientPrivate(KinesisClient * const q);

private:
    Q_DECLARE_PUBLIC(KinesisClient)
    Q_DISABLE_COPY(KinesisClientPrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
