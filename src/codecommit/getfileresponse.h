// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILERESPONSE_H
#define QTAWS_GETFILERESPONSE_H

#include "codecommitresponse.h"
#include "getfilerequest.h"

namespace QtAws {
namespace CodeCommit {

class GetFileResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetFileResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetFileResponse(const GetFileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFileResponse)
    Q_DISABLE_COPY(GetFileResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
