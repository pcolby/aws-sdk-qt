// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITECLIENT_P_H
#define QTAWS_TIMESTREAMWRITECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteClient;

class TimestreamWriteClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TimestreamWriteClientPrivate(TimestreamWriteClient * const q);

private:
    Q_DECLARE_PUBLIC(TimestreamWriteClient)
    Q_DISABLE_COPY(TimestreamWriteClientPrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
