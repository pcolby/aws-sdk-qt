// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYASSOCIATIONSRESPONSE_H
#define QTAWS_LISTREPOSITORYASSOCIATIONSRESPONSE_H

#include "codegurureviewerresponse.h"
#include "listrepositoryassociationsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRepositoryAssociationsResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRepositoryAssociationsResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    ListRepositoryAssociationsResponse(const ListRepositoryAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositoryAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoryAssociationsResponse)
    Q_DISABLE_COPY(ListRepositoryAssociationsResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
