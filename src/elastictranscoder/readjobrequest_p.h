// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READJOBREQUEST_P_H
#define QTAWS_READJOBREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "readjobrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadJobRequest;

class ReadJobRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ReadJobRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ReadJobRequest * const q);
    ReadJobRequestPrivate(const ReadJobRequestPrivate &other,
                                   ReadJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReadJobRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
