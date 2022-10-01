// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEREQUEST_P_H
#define QTAWS_DELETEIMAGEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deleteimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRequest;

class DeleteImageRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteImageRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteImageRequest * const q);
    DeleteImageRequestPrivate(const DeleteImageRequestPrivate &other,
                                   DeleteImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
