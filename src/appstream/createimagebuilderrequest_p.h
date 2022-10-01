// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEBUILDERREQUEST_P_H
#define QTAWS_CREATEIMAGEBUILDERREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class CreateImageBuilderRequest;

class CreateImageBuilderRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateImageBuilderRequestPrivate(const AppStreamRequest::Action action,
                                   CreateImageBuilderRequest * const q);
    CreateImageBuilderRequestPrivate(const CreateImageBuilderRequestPrivate &other,
                                   CreateImageBuilderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
