// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MGNCLIENT_P_H
#define QTAWS_MGNCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Mgn {

class MgnClient;

class MgnClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MgnClientPrivate(MgnClient * const q);

private:
    Q_DECLARE_PUBLIC(MgnClient)
    Q_DISABLE_COPY(MgnClientPrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
