// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDCLIENT_P_H
#define QTAWS_WELLARCHITECTEDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WellArchitected {

class WellArchitectedClient;

class WellArchitectedClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WellArchitectedClientPrivate(WellArchitectedClient * const q);

private:
    Q_DECLARE_PUBLIC(WellArchitectedClient)
    Q_DISABLE_COPY(WellArchitectedClientPrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
