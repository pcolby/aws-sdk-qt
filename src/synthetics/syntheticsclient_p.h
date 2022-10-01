// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSCLIENT_P_H
#define QTAWS_SYNTHETICSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Synthetics {

class SyntheticsClient;

class SyntheticsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SyntheticsClientPrivate(SyntheticsClient * const q);

private:
    Q_DECLARE_PUBLIC(SyntheticsClient)
    Q_DISABLE_COPY(SyntheticsClientPrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
