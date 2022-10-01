// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREVIEWRESPONSE_H
#define QTAWS_CREATECODEREVIEWRESPONSE_H

#include "codegurureviewerresponse.h"
#include "createcodereviewrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CreateCodeReviewResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT CreateCodeReviewResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    CreateCodeReviewResponse(const CreateCodeReviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCodeReviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeReviewResponse)
    Q_DISABLE_COPY(CreateCodeReviewResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
