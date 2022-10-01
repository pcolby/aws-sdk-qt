// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMPROCESSORSREQUEST_P_H
#define QTAWS_LISTSTREAMPROCESSORSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "liststreamprocessorsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListStreamProcessorsRequest;

class ListStreamProcessorsRequestPrivate : public RekognitionRequestPrivate {

public:
    ListStreamProcessorsRequestPrivate(const RekognitionRequest::Action action,
                                   ListStreamProcessorsRequest * const q);
    ListStreamProcessorsRequestPrivate(const ListStreamProcessorsRequestPrivate &other,
                                   ListStreamProcessorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamProcessorsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
