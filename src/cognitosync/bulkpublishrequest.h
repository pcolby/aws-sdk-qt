// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BULKPUBLISHREQUEST_H
#define QTAWS_BULKPUBLISHREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class BulkPublishRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT BulkPublishRequest : public CognitoSyncRequest {

public:
    BulkPublishRequest(const BulkPublishRequest &other);
    BulkPublishRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BulkPublishRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
