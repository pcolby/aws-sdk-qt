// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEREQUEST_P_H
#define QTAWS_CREATEIMAGEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createimagerequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRequest;

class CreateImageRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateImageRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateImageRequest * const q);
    CreateImageRequestPrivate(const CreateImageRequestPrivate &other,
                                   CreateImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
