// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECORDSREQUEST_H
#define QTAWS_UPDATERECORDSREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class UpdateRecordsRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT UpdateRecordsRequest : public CognitoSyncRequest {

public:
    UpdateRecordsRequest(const UpdateRecordsRequest &other);
    UpdateRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecordsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
