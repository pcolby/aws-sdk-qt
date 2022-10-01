// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIFFERENCESRESPONSE_H
#define QTAWS_GETDIFFERENCESRESPONSE_H

#include "codecommitresponse.h"
#include "getdifferencesrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetDifferencesResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetDifferencesResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetDifferencesResponse(const GetDifferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDifferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDifferencesResponse)
    Q_DISABLE_COPY(GetDifferencesResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
