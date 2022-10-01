// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOGNITOEVENTSREQUEST_H
#define QTAWS_GETCOGNITOEVENTSREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetCognitoEventsRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT GetCognitoEventsRequest : public CognitoSyncRequest {

public:
    GetCognitoEventsRequest(const GetCognitoEventsRequest &other);
    GetCognitoEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCognitoEventsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
