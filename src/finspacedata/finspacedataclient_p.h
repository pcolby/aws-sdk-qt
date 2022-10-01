// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATACLIENT_P_H
#define QTAWS_FINSPACEDATACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace FinspaceData {

class FinspaceDataClient;

class FinspaceDataClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FinspaceDataClientPrivate(FinspaceDataClient * const q);

private:
    Q_DECLARE_PUBLIC(FinspaceDataClient)
    Q_DISABLE_COPY(FinspaceDataClientPrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
