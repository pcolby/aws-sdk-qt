// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATECLIENT_P_H
#define QTAWS_TRANSLATECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Translate {

class TranslateClient;

class TranslateClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TranslateClientPrivate(TranslateClient * const q);

private:
    Q_DECLARE_PUBLIC(TranslateClient)
    Q_DISABLE_COPY(TranslateClientPrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
