// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESWEBCLIENT_P_H
#define QTAWS_WORKSPACESWEBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkSpacesWeb {

class WorkSpacesWebClient;

class WorkSpacesWebClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkSpacesWebClientPrivate(WorkSpacesWebClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkSpacesWebClient)
    Q_DISABLE_COPY(WorkSpacesWebClientPrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
