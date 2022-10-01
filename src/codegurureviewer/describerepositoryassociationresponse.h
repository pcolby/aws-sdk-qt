// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYASSOCIATIONRESPONSE_H
#define QTAWS_DESCRIBEREPOSITORYASSOCIATIONRESPONSE_H

#include "codegurureviewerresponse.h"
#include "describerepositoryassociationrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRepositoryAssociationResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DescribeRepositoryAssociationResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    DescribeRepositoryAssociationResponse(const DescribeRepositoryAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRepositoryAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoryAssociationResponse)
    Q_DISABLE_COPY(DescribeRepositoryAssociationResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
