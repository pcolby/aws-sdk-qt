// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSCLIENT_P_H
#define QTAWS_EBSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ebs {

class EbsClient;

class EbsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EbsClientPrivate(EbsClient * const q);

private:
    Q_DECLARE_PUBLIC(EbsClient)
    Q_DISABLE_COPY(EbsClientPrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
