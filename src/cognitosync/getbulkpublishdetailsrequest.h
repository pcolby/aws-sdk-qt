// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKPUBLISHDETAILSREQUEST_H
#define QTAWS_GETBULKPUBLISHDETAILSREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetBulkPublishDetailsRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT GetBulkPublishDetailsRequest : public CognitoSyncRequest {

public:
    GetBulkPublishDetailsRequest(const GetBulkPublishDetailsRequest &other);
    GetBulkPublishDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBulkPublishDetailsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
