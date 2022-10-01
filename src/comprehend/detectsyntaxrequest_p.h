// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSYNTAXREQUEST_P_H
#define QTAWS_DETECTSYNTAXREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detectsyntaxrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectSyntaxRequest;

class DetectSyntaxRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectSyntaxRequestPrivate(const ComprehendRequest::Action action,
                                   DetectSyntaxRequest * const q);
    DetectSyntaxRequestPrivate(const DetectSyntaxRequestPrivate &other,
                                   DetectSyntaxRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectSyntaxRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
