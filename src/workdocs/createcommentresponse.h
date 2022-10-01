// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMENTRESPONSE_H
#define QTAWS_CREATECOMMENTRESPONSE_H

#include "workdocsresponse.h"
#include "createcommentrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCommentResponsePrivate;

class QTAWSWORKDOCS_EXPORT CreateCommentResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    CreateCommentResponse(const CreateCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCommentResponse)
    Q_DISABLE_COPY(CreateCommentResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
