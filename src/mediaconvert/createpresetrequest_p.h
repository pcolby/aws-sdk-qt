// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETREQUEST_P_H
#define QTAWS_CREATEPRESETREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "createpresetrequest.h"

namespace QtAws {
namespace MediaConvert {

class CreatePresetRequest;

class CreatePresetRequestPrivate : public MediaConvertRequestPrivate {

public:
    CreatePresetRequestPrivate(const MediaConvertRequest::Action action,
                                   CreatePresetRequest * const q);
    CreatePresetRequestPrivate(const CreatePresetRequestPrivate &other,
                                   CreatePresetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePresetRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
