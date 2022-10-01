// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FSXCLIENT_P_H
#define QTAWS_FSXCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace FSx {

class FSxClient;

class FSxClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FSxClientPrivate(FSxClient * const q);

private:
    Q_DECLARE_PUBLIC(FSxClient)
    Q_DISABLE_COPY(FSxClientPrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
