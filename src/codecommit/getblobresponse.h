// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOBRESPONSE_H
#define QTAWS_GETBLOBRESPONSE_H

#include "codecommitresponse.h"
#include "getblobrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBlobResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetBlobResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetBlobResponse(const GetBlobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlobResponse)
    Q_DISABLE_COPY(GetBlobResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
