// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEFROMTEMPLATEJOBRESPONSE_H
#define QTAWS_DESCRIBENODEFROMTEMPLATEJOBRESPONSE_H

#include "panoramaresponse.h"
#include "describenodefromtemplatejobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeFromTemplateJobResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribeNodeFromTemplateJobResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribeNodeFromTemplateJobResponse(const DescribeNodeFromTemplateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNodeFromTemplateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeFromTemplateJobResponse)
    Q_DISABLE_COPY(DescribeNodeFromTemplateJobResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
