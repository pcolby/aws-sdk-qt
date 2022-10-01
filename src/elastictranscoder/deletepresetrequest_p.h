// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRESETREQUEST_P_H
#define QTAWS_DELETEPRESETREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "deletepresetrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class DeletePresetRequest;

class DeletePresetRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    DeletePresetRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   DeletePresetRequest * const q);
    DeletePresetRequestPrivate(const DeletePresetRequestPrivate &other,
                                   DeletePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePresetRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
