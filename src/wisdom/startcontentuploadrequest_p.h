// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTUPLOADREQUEST_P_H
#define QTAWS_STARTCONTENTUPLOADREQUEST_P_H

#include "wisdomrequest_p.h"
#include "startcontentuploadrequest.h"

namespace QtAws {
namespace Wisdom {

class StartContentUploadRequest;

class StartContentUploadRequestPrivate : public WisdomRequestPrivate {

public:
    StartContentUploadRequestPrivate(const WisdomRequest::Action action,
                                   StartContentUploadRequest * const q);
    StartContentUploadRequestPrivate(const StartContentUploadRequestPrivate &other,
                                   StartContentUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartContentUploadRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
