// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEKEYPHRASESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describekeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeKeyPhrasesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeKeyPhrasesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeKeyPhrasesDetectionJobResponse(const DescribeKeyPhrasesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeKeyPhrasesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(DescribeKeyPhrasesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
