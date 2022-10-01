// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCLIENT_P_H
#define QTAWS_IVSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ivs {

class IvsClient;

class IvsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IvsClientPrivate(IvsClient * const q);

private:
    Q_DECLARE_PUBLIC(IvsClient)
    Q_DISABLE_COPY(IvsClientPrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
