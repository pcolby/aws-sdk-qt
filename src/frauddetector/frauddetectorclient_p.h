// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FRAUDDETECTORCLIENT_P_H
#define QTAWS_FRAUDDETECTORCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace FraudDetector {

class FraudDetectorClient;

class FraudDetectorClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FraudDetectorClientPrivate(FraudDetectorClient * const q);

private:
    Q_DECLARE_PUBLIC(FraudDetectorClient)
    Q_DISABLE_COPY(FraudDetectorClientPrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
