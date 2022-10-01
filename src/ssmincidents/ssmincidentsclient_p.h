// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMINCIDENTSCLIENT_P_H
#define QTAWS_SSMINCIDENTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsClient;

class SsmIncidentsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsmIncidentsClientPrivate(SsmIncidentsClient * const q);

private:
    Q_DECLARE_PUBLIC(SsmIncidentsClient)
    Q_DISABLE_COPY(SsmIncidentsClientPrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
