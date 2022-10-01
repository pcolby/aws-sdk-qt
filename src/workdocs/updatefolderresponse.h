// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERRESPONSE_H
#define QTAWS_UPDATEFOLDERRESPONSE_H

#include "workdocsresponse.h"
#include "updatefolderrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateFolderResponsePrivate;

class QTAWSWORKDOCS_EXPORT UpdateFolderResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    UpdateFolderResponse(const UpdateFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFolderResponse)
    Q_DISABLE_COPY(UpdateFolderResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
