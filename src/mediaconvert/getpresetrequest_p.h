// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRESETREQUEST_P_H
#define QTAWS_GETPRESETREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "getpresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class GetPresetRequest;

class GetPresetRequestPrivate : public MediaConvertRequestPrivate {

public:
    GetPresetRequestPrivate(const MediaConvertRequest::Action action,
                                   GetPresetRequest * const q);
    GetPresetRequestPrivate(const GetPresetRequestPrivate &other,
                                   GetPresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
