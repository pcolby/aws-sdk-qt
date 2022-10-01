// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCHATCLIENT_P_H
#define QTAWS_IVSCHATCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IvsChat {

class IvsChatClient;

class IvsChatClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IvsChatClientPrivate(IvsChatClient * const q);

private:
    Q_DECLARE_PUBLIC(IvsChatClient)
    Q_DISABLE_COPY(IvsChatClientPrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
