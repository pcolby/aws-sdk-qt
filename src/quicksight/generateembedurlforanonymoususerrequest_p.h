// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERREQUEST_P_H
#define QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "generateembedurlforanonymoususerrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForAnonymousUserRequest;

class GenerateEmbedUrlForAnonymousUserRequestPrivate : public QuickSightRequestPrivate {

public:
    GenerateEmbedUrlForAnonymousUserRequestPrivate(const QuickSightRequest::Action action,
                                   GenerateEmbedUrlForAnonymousUserRequest * const q);
    GenerateEmbedUrlForAnonymousUserRequestPrivate(const GenerateEmbedUrlForAnonymousUserRequestPrivate &other,
                                   GenerateEmbedUrlForAnonymousUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateEmbedUrlForAnonymousUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
