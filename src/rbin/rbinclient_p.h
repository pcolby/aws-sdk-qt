// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RBINCLIENT_P_H
#define QTAWS_RBINCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Rbin {

class RbinClient;

class RbinClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RbinClientPrivate(RbinClient * const q);

private:
    Q_DECLARE_PUBLIC(RbinClient)
    Q_DISABLE_COPY(RbinClientPrivate)

};

} // namespace Rbin
} // namespace QtAws

#endif
