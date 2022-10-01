// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRESETREQUEST_P_H
#define QTAWS_UPDATEPRESETREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "updatepresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdatePresetRequest;

class UpdatePresetRequestPrivate : public MediaConvertRequestPrivate {

public:
    UpdatePresetRequestPrivate(const MediaConvertRequest::Action action,
                                   UpdatePresetRequest * const q);
    UpdatePresetRequestPrivate(const UpdatePresetRequestPrivate &other,
                                   UpdatePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
