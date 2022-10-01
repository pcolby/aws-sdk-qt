// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSREQUEST_P_H
#define QTAWS_DELETETAGSREQUEST_P_H

#include "ec2request_p.h"
#include "deletetagsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTagsRequest;

class DeleteTagsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTagsRequestPrivate(const Ec2Request::Action action,
                                   DeleteTagsRequest * const q);
    DeleteTagsRequestPrivate(const DeleteTagsRequestPrivate &other,
                                   DeleteTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTagsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
