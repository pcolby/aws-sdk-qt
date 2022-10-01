// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTIVECLIENT_P_H
#define QTAWS_DETECTIVECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Detective {

class DetectiveClient;

class DetectiveClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DetectiveClientPrivate(DetectiveClient * const q);

private:
    Q_DECLARE_PUBLIC(DetectiveClient)
    Q_DISABLE_COPY(DetectiveClientPrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
