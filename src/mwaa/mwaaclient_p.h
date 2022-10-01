// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MWAACLIENT_P_H
#define QTAWS_MWAACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Mwaa {

class MwaaClient;

class MwaaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MwaaClientPrivate(MwaaClient * const q);

private:
    Q_DECLARE_PUBLIC(MwaaClient)
    Q_DISABLE_COPY(MwaaClientPrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
