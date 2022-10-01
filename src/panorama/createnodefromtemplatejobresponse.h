// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEFROMTEMPLATEJOBRESPONSE_H
#define QTAWS_CREATENODEFROMTEMPLATEJOBRESPONSE_H

#include "panoramaresponse.h"
#include "createnodefromtemplatejobrequest.h"

namespace QtAws {
namespace Panorama {

class CreateNodeFromTemplateJobResponsePrivate;

class QTAWSPANORAMA_EXPORT CreateNodeFromTemplateJobResponse : public PanoramaResponse {
    Q_OBJECT

public:
    CreateNodeFromTemplateJobResponse(const CreateNodeFromTemplateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNodeFromTemplateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodeFromTemplateJobResponse)
    Q_DISABLE_COPY(CreateNodeFromTemplateJobResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
