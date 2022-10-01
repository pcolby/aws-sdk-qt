// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYINFOREQUEST_P_H
#define QTAWS_GETCELEBRITYINFOREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getcelebrityinforequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityInfoRequest;

class GetCelebrityInfoRequestPrivate : public RekognitionRequestPrivate {

public:
    GetCelebrityInfoRequestPrivate(const RekognitionRequest::Action action,
                                   GetCelebrityInfoRequest * const q);
    GetCelebrityInfoRequestPrivate(const GetCelebrityInfoRequestPrivate &other,
                                   GetCelebrityInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCelebrityInfoRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
