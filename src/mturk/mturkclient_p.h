// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MTURKCLIENT_P_H
#define QTAWS_MTURKCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MTurk {

class MTurkClient;

class MTurkClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MTurkClientPrivate(MTurkClient * const q);

private:
    Q_DECLARE_PUBLIC(MTurkClient)
    Q_DISABLE_COPY(MTurkClientPrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
