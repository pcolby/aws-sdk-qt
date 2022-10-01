// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERRESPONSE_H
#define QTAWS_GETFOLDERRESPONSE_H

#include "codecommitresponse.h"
#include "getfolderrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetFolderResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetFolderResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetFolderResponse(const GetFolderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFolderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFolderResponse)
    Q_DISABLE_COPY(GetFolderResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
