// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERUNTIMECLIENT_P_H
#define QTAWS_PERSONALIZERUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeClient;

class PersonalizeRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PersonalizeRuntimeClientPrivate(PersonalizeRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(PersonalizeRuntimeClient)
    Q_DISABLE_COPY(PersonalizeRuntimeClientPrivate)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
