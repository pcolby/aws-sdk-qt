// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RAMCLIENT_P_H
#define QTAWS_RAMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ram {

class RamClient;

class RamClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RamClientPrivate(RamClient * const q);

private:
    Q_DECLARE_PUBLIC(RamClient)
    Q_DISABLE_COPY(RamClientPrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
