// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMECLIENT_P_H
#define QTAWS_LEXRUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LexRuntime {

class LexRuntimeClient;

class LexRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LexRuntimeClientPrivate(LexRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(LexRuntimeClient)
    Q_DISABLE_COPY(LexRuntimeClientPrivate)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
