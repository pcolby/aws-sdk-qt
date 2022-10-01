// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESCLIENT_P_H
#define QTAWS_WORKSPACESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesClient;

class WorkSpacesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkSpacesClientPrivate(WorkSpacesClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClientPrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
