// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECORDSREQUEST_P_H
#define QTAWS_UPDATERECORDSREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "updaterecordsrequest.h"

namespace QtAws {
namespace CognitoSync {

class UpdateRecordsRequest;

class UpdateRecordsRequestPrivate : public CognitoSyncRequestPrivate {

public:
    UpdateRecordsRequestPrivate(const CognitoSyncRequest::Action action,
                                   UpdateRecordsRequest * const q);
    UpdateRecordsRequestPrivate(const UpdateRecordsRequestPrivate &other,
                                   UpdateRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecordsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
