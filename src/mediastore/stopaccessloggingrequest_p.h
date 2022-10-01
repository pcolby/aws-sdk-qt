// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACCESSLOGGINGREQUEST_P_H
#define QTAWS_STOPACCESSLOGGINGREQUEST_P_H

#include "mediastorerequest_p.h"
#include "stopaccessloggingrequest.h"

namespace QtAws {
namespace MediaStore {

class StopAccessLoggingRequest;

class StopAccessLoggingRequestPrivate : public MediaStoreRequestPrivate {

public:
    StopAccessLoggingRequestPrivate(const MediaStoreRequest::Action action,
                                   StopAccessLoggingRequest * const q);
    StopAccessLoggingRequestPrivate(const StopAccessLoggingRequestPrivate &other,
                                   StopAccessLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopAccessLoggingRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
