// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSCLIENT_P_H
#define QTAWS_SAVINGSPLANSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansClient;

class SavingsPlansClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SavingsPlansClientPrivate(SavingsPlansClient * const q);

private:
    Q_DECLARE_PUBLIC(SavingsPlansClient)
    Q_DISABLE_COPY(SavingsPlansClientPrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
