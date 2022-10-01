// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "updateimagegenerationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateImageGenerationConfigurationRequest;

class UpdateImageGenerationConfigurationRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UpdateImageGenerationConfigurationRequestPrivate(const KinesisVideoRequest::Action action,
                                   UpdateImageGenerationConfigurationRequest * const q);
    UpdateImageGenerationConfigurationRequestPrivate(const UpdateImageGenerationConfigurationRequestPrivate &other,
                                   UpdateImageGenerationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateImageGenerationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
