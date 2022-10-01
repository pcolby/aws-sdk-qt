// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWCLIENT_P_H
#define QTAWS_WORKMAILMESSAGEFLOWCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowClient;

class WorkMailMessageFlowClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkMailMessageFlowClientPrivate(WorkMailMessageFlowClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkMailMessageFlowClient)
    Q_DISABLE_COPY(WorkMailMessageFlowClientPrivate)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
