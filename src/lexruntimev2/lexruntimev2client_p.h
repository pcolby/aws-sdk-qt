// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEV2CLIENT_P_H
#define QTAWS_LEXRUNTIMEV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2Client;

class LexRuntimeV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LexRuntimeV2ClientPrivate(LexRuntimeV2Client * const q);

private:
    Q_DECLARE_PUBLIC(LexRuntimeV2Client)
    Q_DISABLE_COPY(LexRuntimeV2ClientPrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
