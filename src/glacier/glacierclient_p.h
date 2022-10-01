// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERCLIENT_P_H
#define QTAWS_GLACIERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Glacier {

class GlacierClient;

class GlacierClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GlacierClientPrivate(GlacierClient * const q);

private:
    Q_DECLARE_PUBLIC(GlacierClient)
    Q_DISABLE_COPY(GlacierClientPrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
