// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRESETREQUEST_P_H
#define QTAWS_DELETEPRESETREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "deletepresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeletePresetRequest;

class DeletePresetRequestPrivate : public MediaConvertRequestPrivate {

public:
    DeletePresetRequestPrivate(const MediaConvertRequest::Action action,
                                   DeletePresetRequest * const q);
    DeletePresetRequestPrivate(const DeletePresetRequestPrivate &other,
                                   DeletePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
