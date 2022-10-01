// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACCESSLOGGINGREQUEST_P_H
#define QTAWS_STARTACCESSLOGGINGREQUEST_P_H

#include "mediastorerequest_p.h"
#include "startaccessloggingrequest.h"

namespace QtAws {
namespace MediaStore {

class StartAccessLoggingRequest;

class StartAccessLoggingRequestPrivate : public MediaStoreRequestPrivate {

public:
    StartAccessLoggingRequestPrivate(const MediaStoreRequest::Action action,
                                   StartAccessLoggingRequest * const q);
    StartAccessLoggingRequestPrivate(const StartAccessLoggingRequestPrivate &other,
                                   StartAccessLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAccessLoggingRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
