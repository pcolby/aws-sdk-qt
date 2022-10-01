// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEUPLOADURLREQUEST_P_H
#define QTAWS_GETFILEUPLOADURLREQUEST_P_H

#include "mturkrequest_p.h"
#include "getfileuploadurlrequest.h"

namespace QtAws {
namespace MTurk {

class GetFileUploadURLRequest;

class GetFileUploadURLRequestPrivate : public MTurkRequestPrivate {

public:
    GetFileUploadURLRequestPrivate(const MTurkRequest::Action action,
                                   GetFileUploadURLRequest * const q);
    GetFileUploadURLRequestPrivate(const GetFileUploadURLRequestPrivate &other,
                                   GetFileUploadURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFileUploadURLRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
