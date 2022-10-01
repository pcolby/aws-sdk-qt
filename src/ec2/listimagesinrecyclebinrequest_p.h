// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESINRECYCLEBINREQUEST_P_H
#define QTAWS_LISTIMAGESINRECYCLEBINREQUEST_P_H

#include "ec2request_p.h"
#include "listimagesinrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class ListImagesInRecycleBinRequest;

class ListImagesInRecycleBinRequestPrivate : public Ec2RequestPrivate {

public:
    ListImagesInRecycleBinRequestPrivate(const Ec2Request::Action action,
                                   ListImagesInRecycleBinRequest * const q);
    ListImagesInRecycleBinRequestPrivate(const ListImagesInRecycleBinRequestPrivate &other,
                                   ListImagesInRecycleBinRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagesInRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
