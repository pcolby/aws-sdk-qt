// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FIREHOSECLIENT_P_H
#define QTAWS_FIREHOSECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Firehose {

class FirehoseClient;

class FirehoseClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FirehoseClientPrivate(FirehoseClient * const q);

private:
    Q_DECLARE_PUBLIC(FirehoseClient)
    Q_DISABLE_COPY(FirehoseClientPrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
