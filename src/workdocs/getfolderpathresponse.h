// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERPATHRESPONSE_H
#define QTAWS_GETFOLDERPATHRESPONSE_H

#include "workdocsresponse.h"
#include "getfolderpathrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderPathResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetFolderPathResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetFolderPathResponse(const GetFolderPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFolderPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFolderPathResponse)
    Q_DISABLE_COPY(GetFolderPathResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
