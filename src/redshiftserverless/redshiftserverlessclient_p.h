// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTSERVERLESSCLIENT_P_H
#define QTAWS_REDSHIFTSERVERLESSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace RedshiftServerless {

class RedshiftServerlessClient;

class RedshiftServerlessClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RedshiftServerlessClientPrivate(RedshiftServerlessClient * const q);

private:
    Q_DECLARE_PUBLIC(RedshiftServerlessClient)
    Q_DISABLE_COPY(RedshiftServerlessClientPrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
