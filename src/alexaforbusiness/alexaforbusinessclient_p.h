// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALEXAFORBUSINESSCLIENT_P_H
#define QTAWS_ALEXAFORBUSINESSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessClient;

class AlexaForBusinessClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AlexaForBusinessClientPrivate(AlexaForBusinessClient * const q);

private:
    Q_DECLARE_PUBLIC(AlexaForBusinessClient)
    Q_DISABLE_COPY(AlexaForBusinessClientPrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
