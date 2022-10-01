// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREVIEWSRESPONSE_H
#define QTAWS_LISTCODEREVIEWSRESPONSE_H

#include "codegurureviewerresponse.h"
#include "listcodereviewsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListCodeReviewsResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListCodeReviewsResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    ListCodeReviewsResponse(const ListCodeReviewsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCodeReviewsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCodeReviewsResponse)
    Q_DISABLE_COPY(ListCodeReviewsResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
