// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NEPTUNECLIENT_P_H
#define QTAWS_NEPTUNECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Neptune {

class NeptuneClient;

class NeptuneClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit NeptuneClientPrivate(NeptuneClient * const q);

private:
    Q_DECLARE_PUBLIC(NeptuneClient)
    Q_DISABLE_COPY(NeptuneClientPrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
