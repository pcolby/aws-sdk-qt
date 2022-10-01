// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURUCLIENT_P_H
#define QTAWS_DEVOPSGURUCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruClient;

class DevOpsGuruClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DevOpsGuruClientPrivate(DevOpsGuruClient * const q);

private:
    Q_DECLARE_PUBLIC(DevOpsGuruClient)
    Q_DISABLE_COPY(DevOpsGuruClientPrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
