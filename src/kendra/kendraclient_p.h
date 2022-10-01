// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KENDRACLIENT_P_H
#define QTAWS_KENDRACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Kendra {

class KendraClient;

class KendraClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KendraClientPrivate(KendraClient * const q);

private:
    Q_DECLARE_PUBLIC(KendraClient)
    Q_DISABLE_COPY(KendraClientPrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
