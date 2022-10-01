// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTRESPONSE_H
#define QTAWS_DELETECOMMENTRESPONSE_H

#include "workdocsresponse.h"
#include "deletecommentrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCommentResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteCommentResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteCommentResponse(const DeleteCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCommentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCommentResponse)
    Q_DISABLE_COPY(DeleteCommentResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
