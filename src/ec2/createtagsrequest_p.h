// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSREQUEST_P_H
#define QTAWS_CREATETAGSREQUEST_P_H

#include "ec2request_p.h"
#include "createtagsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTagsRequest;

class CreateTagsRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTagsRequestPrivate(const Ec2Request::Action action,
                                   CreateTagsRequest * const q);
    CreateTagsRequestPrivate(const CreateTagsRequestPrivate &other,
                                   CreateTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTagsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
