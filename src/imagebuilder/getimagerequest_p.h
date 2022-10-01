// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEREQUEST_P_H
#define QTAWS_GETIMAGEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRequest;

class GetImageRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetImageRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetImageRequest * const q);
    GetImageRequestPrivate(const GetImageRequestPrivate &other,
                                   GetImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
