// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACECLIENT_P_H
#define QTAWS_FINSPACECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Finspace {

class FinspaceClient;

class FinspaceClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FinspaceClientPrivate(FinspaceClient * const q);

private:
    Q_DECLARE_PUBLIC(FinspaceClient)
    Q_DISABLE_COPY(FinspaceClientPrivate)

};

} // namespace Finspace
} // namespace QtAws

#endif
