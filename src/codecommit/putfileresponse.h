// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILERESPONSE_H
#define QTAWS_PUTFILERESPONSE_H

#include "codecommitresponse.h"
#include "putfilerequest.h"

namespace QtAws {
namespace CodeCommit {

class PutFileResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PutFileResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PutFileResponse(const PutFileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFileResponse)
    Q_DISABLE_COPY(PutFileResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
