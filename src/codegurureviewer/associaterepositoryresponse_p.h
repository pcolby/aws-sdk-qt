// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEREPOSITORYRESPONSE_P_H
#define QTAWS_ASSOCIATEREPOSITORYRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class AssociateRepositoryResponse;

class AssociateRepositoryResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit AssociateRepositoryResponsePrivate(AssociateRepositoryResponse * const q);

    void parseAssociateRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateRepositoryResponse)
    Q_DISABLE_COPY(AssociateRepositoryResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
