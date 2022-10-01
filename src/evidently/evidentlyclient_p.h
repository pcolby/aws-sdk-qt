// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVIDENTLYCLIENT_P_H
#define QTAWS_EVIDENTLYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Evidently {

class EvidentlyClient;

class EvidentlyClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EvidentlyClientPrivate(EvidentlyClient * const q);

private:
    Q_DECLARE_PUBLIC(EvidentlyClient)
    Q_DISABLE_COPY(EvidentlyClientPrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
