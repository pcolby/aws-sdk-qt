// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETREQUEST_P_H
#define QTAWS_CREATEPRESETREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "createpresetrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class CreatePresetRequest;

class CreatePresetRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    CreatePresetRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   CreatePresetRequest * const q);
    CreatePresetRequestPrivate(const CreatePresetRequestPrivate &other,
                                   CreatePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePresetRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
