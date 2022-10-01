// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPRESETREQUEST_P_H
#define QTAWS_READPRESETREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "readpresetrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPresetRequest;

class ReadPresetRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ReadPresetRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   ReadPresetRequest * const q);
    ReadPresetRequestPrivate(const ReadPresetRequestPrivate &other,
                                   ReadPresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReadPresetRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
