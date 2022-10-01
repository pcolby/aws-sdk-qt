// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDSREQUEST_H
#define QTAWS_LISTRECORDSREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class ListRecordsRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT ListRecordsRequest : public CognitoSyncRequest {

public:
    ListRecordsRequest(const ListRecordsRequest &other);
    ListRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
