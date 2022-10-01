// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTEXPLORERCLIENT_P_H
#define QTAWS_COSTEXPLORERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CostExplorer {

class CostExplorerClient;

class CostExplorerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CostExplorerClientPrivate(CostExplorerClient * const q);

private:
    Q_DECLARE_PUBLIC(CostExplorerClient)
    Q_DISABLE_COPY(CostExplorerClientPrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
