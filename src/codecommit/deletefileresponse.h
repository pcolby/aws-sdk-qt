// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILERESPONSE_H
#define QTAWS_DELETEFILERESPONSE_H

#include "codecommitresponse.h"
#include "deletefilerequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteFileResponsePrivate;

class QTAWSCODECOMMIT_EXPORT DeleteFileResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    DeleteFileResponse(const DeleteFileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileResponse)
    Q_DISABLE_COPY(DeleteFileResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
