// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLUECLIENT_P_H
#define QTAWS_GLUECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Glue {

class GlueClient;

class GlueClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GlueClientPrivate(GlueClient * const q);

private:
    Q_DECLARE_PUBLIC(GlueClient)
    Q_DISABLE_COPY(GlueClientPrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
