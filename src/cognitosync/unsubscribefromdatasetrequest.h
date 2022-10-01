// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMDATASETREQUEST_H
#define QTAWS_UNSUBSCRIBEFROMDATASETREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class UnsubscribeFromDatasetRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT UnsubscribeFromDatasetRequest : public CognitoSyncRequest {

public:
    UnsubscribeFromDatasetRequest(const UnsubscribeFromDatasetRequest &other);
    UnsubscribeFromDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeFromDatasetRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
