// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDIMAGEREQUEST_P_H
#define QTAWS_CREATEUPDATEDIMAGEREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createupdatedimagerequest.h"

namespace QtAws {
namespace AppStream {

class CreateUpdatedImageRequest;

class CreateUpdatedImageRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateUpdatedImageRequestPrivate(const AppStreamRequest::Action action,
                                   CreateUpdatedImageRequest * const q);
    CreateUpdatedImageRequestPrivate(const CreateUpdatedImageRequestPrivate &other,
                                   CreateUpdatedImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUpdatedImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
