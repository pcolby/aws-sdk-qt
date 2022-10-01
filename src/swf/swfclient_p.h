// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWFCLIENT_P_H
#define QTAWS_SWFCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Swf {

class SwfClient;

class SwfClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SwfClientPrivate(SwfClient * const q);

private:
    Q_DECLARE_PUBLIC(SwfClient)
    Q_DISABLE_COPY(SwfClientPrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
