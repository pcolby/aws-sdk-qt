// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERRESPONSE_H
#define QTAWS_DELETEFOLDERRESPONSE_H

#include "workdocsresponse.h"
#include "deletefolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteFolderResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteFolderResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteFolderResponse(const DeleteFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFolderResponse)
    Q_DISABLE_COPY(DeleteFolderResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
