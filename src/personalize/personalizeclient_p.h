// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZECLIENT_P_H
#define QTAWS_PERSONALIZECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Personalize {

class PersonalizeClient;

class PersonalizeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PersonalizeClientPrivate(PersonalizeClient * const q);

private:
    Q_DECLARE_PUBLIC(PersonalizeClient)
    Q_DISABLE_COPY(PersonalizeClientPrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
