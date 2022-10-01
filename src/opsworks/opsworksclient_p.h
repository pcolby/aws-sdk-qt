// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCLIENT_P_H
#define QTAWS_OPSWORKSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace OpsWorks {

class OpsWorksClient;

class OpsWorksClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit OpsWorksClientPrivate(OpsWorksClient * const q);

private:
    Q_DECLARE_PUBLIC(OpsWorksClient)
    Q_DISABLE_COPY(OpsWorksClientPrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
