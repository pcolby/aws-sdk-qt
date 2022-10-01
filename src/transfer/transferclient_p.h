// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERCLIENT_P_H
#define QTAWS_TRANSFERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Transfer {

class TransferClient;

class TransferClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TransferClientPrivate(TransferClient * const q);

private:
    Q_DECLARE_PUBLIC(TransferClient)
    Q_DISABLE_COPY(TransferClientPrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
