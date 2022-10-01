// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREVIEWRESPONSE_H
#define QTAWS_DESCRIBECODEREVIEWRESPONSE_H

#include "codegurureviewerresponse.h"
#include "describecodereviewrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeCodeReviewResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeCodeReviewResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    DescribeCodeReviewResponse(const DescribeCodeReviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCodeReviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeReviewResponse)
    Q_DISABLE_COPY(DescribeCodeReviewResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
