// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTOR2CLIENT_P_H
#define QTAWS_INSPECTOR2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Inspector2 {

class Inspector2Client;

class Inspector2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Inspector2ClientPrivate(Inspector2Client * const q);

private:
    Q_DECLARE_PUBLIC(Inspector2Client)
    Q_DISABLE_COPY(Inspector2ClientPrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
