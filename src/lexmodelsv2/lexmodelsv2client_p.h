// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELSV2CLIENT_P_H
#define QTAWS_LEXMODELSV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2Client;

class LexModelsV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LexModelsV2ClientPrivate(LexModelsV2Client * const q);

private:
    Q_DECLARE_PUBLIC(LexModelsV2Client)
    Q_DISABLE_COPY(LexModelsV2ClientPrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
