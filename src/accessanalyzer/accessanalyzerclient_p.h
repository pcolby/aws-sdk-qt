// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCESSANALYZERCLIENT_P_H
#define QTAWS_ACCESSANALYZERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AccessAnalyzer {

class AccessAnalyzerClient;

class AccessAnalyzerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AccessAnalyzerClientPrivate(AccessAnalyzerClient * const q);

private:
    Q_DECLARE_PUBLIC(AccessAnalyzerClient)
    Q_DISABLE_COPY(AccessAnalyzerClientPrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
