// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOSYNCREQUEST_P_H
#define QTAWS_COGNITOSYNCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class CognitoSyncRequest;

class CognitoSyncRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CognitoSyncRequest::Action action; ///< CognitoSync action to be performed.
    QString apiVersion;        ///< CognitoSync API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CognitoSync request (query string) parameters. @todo?

    CognitoSyncRequestPrivate(const CognitoSyncRequest::Action action, CognitoSyncRequest * const q);
    CognitoSyncRequestPrivate(const CognitoSyncRequestPrivate &other, CognitoSyncRequest * const q);

    static QString toString(const CognitoSyncRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CognitoSyncRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
