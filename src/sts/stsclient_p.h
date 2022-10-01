// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STSCLIENT_P_H
#define QTAWS_STSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sts {

class StsClient;

class StsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit StsClientPrivate(StsClient * const q);

private:
    Q_DECLARE_PUBLIC(StsClient)
    Q_DISABLE_COPY(StsClientPrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
