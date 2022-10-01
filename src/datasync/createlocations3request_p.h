// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONS3REQUEST_P_H
#define QTAWS_CREATELOCATIONS3REQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocations3request.h"

namespace QtAws {
namespace DataSync {

class CreateLocationS3Request;

class CreateLocationS3RequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationS3RequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationS3Request * const q);
    CreateLocationS3RequestPrivate(const CreateLocationS3RequestPrivate &other,
                                   CreateLocationS3Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif
