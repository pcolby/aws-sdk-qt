// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTREPOSITORYASSOCIATIONSRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRepositoryAssociationsResponse;

class ListRepositoryAssociationsResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit ListRepositoryAssociationsResponsePrivate(ListRepositoryAssociationsResponse * const q);

    void parseListRepositoryAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRepositoryAssociationsResponse)
    Q_DISABLE_COPY(ListRepositoryAssociationsResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
