// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERREQUEST_P_H
#define QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "generateembedurlforregistereduserrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForRegisteredUserRequest;

class GenerateEmbedUrlForRegisteredUserRequestPrivate : public QuickSightRequestPrivate {

public:
    GenerateEmbedUrlForRegisteredUserRequestPrivate(const QuickSightRequest::Action action,
                                   GenerateEmbedUrlForRegisteredUserRequest * const q);
    GenerateEmbedUrlForRegisteredUserRequestPrivate(const GenerateEmbedUrlForRegisteredUserRequestPrivate &other,
                                   GenerateEmbedUrlForRegisteredUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateEmbedUrlForRegisteredUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
