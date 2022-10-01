// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYASSOCIATIONRESPONSE_P_H
#define QTAWS_DESCRIBEREPOSITORYASSOCIATIONRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeRepositoryAssociationResponse;

class DescribeRepositoryAssociationResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit DescribeRepositoryAssociationResponsePrivate(DescribeRepositoryAssociationResponse * const q);

    void parseDescribeRepositoryAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoryAssociationResponse)
    Q_DISABLE_COPY(DescribeRepositoryAssociationResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
