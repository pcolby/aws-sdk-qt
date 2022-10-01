// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETCOGNITOEVENTSREQUEST_H
#define QTAWS_SETCOGNITOEVENTSREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetCognitoEventsRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT SetCognitoEventsRequest : public CognitoSyncRequest {

public:
    SetCognitoEventsRequest(const SetCognitoEventsRequest &other);
    SetCognitoEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetCognitoEventsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
