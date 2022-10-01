// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKLINKCLIENT_P_H
#define QTAWS_WORKLINKCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkLink {

class WorkLinkClient;

class WorkLinkClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkLinkClientPrivate(WorkLinkClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkLinkClient)
    Q_DISABLE_COPY(WorkLinkClientPrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
