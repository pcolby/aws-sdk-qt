// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTOBJECTCONTENTREQUEST_P_H
#define QTAWS_SELECTOBJECTCONTENTREQUEST_P_H

#include "s3request_p.h"
#include "selectobjectcontentrequest.h"

namespace QtAws {
namespace S3 {

class SelectObjectContentRequest;

class SelectObjectContentRequestPrivate : public S3RequestPrivate {

public:
    SelectObjectContentRequestPrivate(const S3Request::Action action,
                                   SelectObjectContentRequest * const q);
    SelectObjectContentRequestPrivate(const SelectObjectContentRequestPrivate &other,
                                   SelectObjectContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(SelectObjectContentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
