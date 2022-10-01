// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSCLIENT_P_H
#define QTAWS_EMRSERVERLESSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace EmrServerless {

class EmrServerlessClient;

class EmrServerlessClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EmrServerlessClientPrivate(EmrServerlessClient * const q);

private:
    Q_DECLARE_PUBLIC(EmrServerlessClient)
    Q_DISABLE_COPY(EmrServerlessClientPrivate)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
