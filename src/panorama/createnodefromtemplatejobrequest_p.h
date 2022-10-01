// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEFROMTEMPLATEJOBREQUEST_P_H
#define QTAWS_CREATENODEFROMTEMPLATEJOBREQUEST_P_H

#include "panoramarequest_p.h"
#include "createnodefromtemplatejobrequest.h"

namespace QtAws {
namespace Panorama {

class CreateNodeFromTemplateJobRequest;

class CreateNodeFromTemplateJobRequestPrivate : public PanoramaRequestPrivate {

public:
    CreateNodeFromTemplateJobRequestPrivate(const PanoramaRequest::Action action,
                                   CreateNodeFromTemplateJobRequest * const q);
    CreateNodeFromTemplateJobRequestPrivate(const CreateNodeFromTemplateJobRequestPrivate &other,
                                   CreateNodeFromTemplateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNodeFromTemplateJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
