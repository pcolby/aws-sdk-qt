// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCLIENT_P_H
#define QTAWS_BATCHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Batch {

class BatchClient;

class BatchClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BatchClientPrivate(BatchClient * const q);

private:
    Q_DECLARE_PUBLIC(BatchClient)
    Q_DISABLE_COPY(BatchClientPrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
