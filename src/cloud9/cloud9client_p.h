// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9CLIENT_P_H
#define QTAWS_CLOUD9CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Cloud9 {

class Cloud9Client;

class Cloud9ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Cloud9ClientPrivate(Cloud9Client * const q);

private:
    Q_DECLARE_PUBLIC(Cloud9Client)
    Q_DISABLE_COPY(Cloud9ClientPrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
