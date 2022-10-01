// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEFROMTEMPLATEJOBSRESPONSE_H
#define QTAWS_LISTNODEFROMTEMPLATEJOBSRESPONSE_H

#include "panoramaresponse.h"
#include "listnodefromtemplatejobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListNodeFromTemplateJobsResponsePrivate;

class QTAWSPANORAMA_EXPORT ListNodeFromTemplateJobsResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListNodeFromTemplateJobsResponse(const ListNodeFromTemplateJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNodeFromTemplateJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodeFromTemplateJobsResponse)
    Q_DISABLE_COPY(ListNodeFromTemplateJobsResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
