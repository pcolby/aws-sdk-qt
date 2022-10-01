// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSCLIENT_P_H
#define QTAWS_OUTPOSTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Outposts {

class OutpostsClient;

class OutpostsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit OutpostsClientPrivate(OutpostsClient * const q);

private:
    Q_DECLARE_PUBLIC(OutpostsClient)
    Q_DISABLE_COPY(OutpostsClientPrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
