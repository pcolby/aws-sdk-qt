// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEBUILDERREQUEST_P_H
#define QTAWS_DELETEIMAGEBUILDERREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteimagebuilderrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageBuilderRequest;

class DeleteImageBuilderRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteImageBuilderRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteImageBuilderRequest * const q);
    DeleteImageBuilderRequestPrivate(const DeleteImageBuilderRequestPrivate &other,
                                   DeleteImageBuilderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageBuilderRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
