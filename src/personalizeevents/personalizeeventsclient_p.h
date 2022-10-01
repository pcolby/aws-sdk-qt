// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEEVENTSCLIENT_P_H
#define QTAWS_PERSONALIZEEVENTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsClient;

class PersonalizeEventsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PersonalizeEventsClientPrivate(PersonalizeEventsClient * const q);

private:
    Q_DECLARE_PUBLIC(PersonalizeEventsClient)
    Q_DISABLE_COPY(PersonalizeEventsClientPrivate)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
