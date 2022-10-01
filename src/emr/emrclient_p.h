// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCLIENT_P_H
#define QTAWS_EMRCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Emr {

class EmrClient;

class EmrClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EmrClientPrivate(EmrClient * const q);

private:
    Q_DECLARE_PUBLIC(EmrClient)
    Q_DISABLE_COPY(EmrClientPrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
