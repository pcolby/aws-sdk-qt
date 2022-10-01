// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEFROMTEMPLATEJOBREQUEST_H
#define QTAWS_CREATENODEFROMTEMPLATEJOBREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class CreateNodeFromTemplateJobRequestPrivate;

class QTAWSPANORAMA_EXPORT CreateNodeFromTemplateJobRequest : public PanoramaRequest {

public:
    CreateNodeFromTemplateJobRequest(const CreateNodeFromTemplateJobRequest &other);
    CreateNodeFromTemplateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodeFromTemplateJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
