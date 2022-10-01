// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAUDSTERREQUEST_P_H
#define QTAWS_DESCRIBEFRAUDSTERREQUEST_P_H

#include "voiceidrequest_p.h"
#include "describefraudsterrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeFraudsterRequest;

class DescribeFraudsterRequestPrivate : public VoiceIdRequestPrivate {

public:
    DescribeFraudsterRequestPrivate(const VoiceIdRequest::Action action,
                                   DescribeFraudsterRequest * const q);
    DescribeFraudsterRequestPrivate(const DescribeFraudsterRequestPrivate &other,
                                   DescribeFraudsterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFraudsterRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
