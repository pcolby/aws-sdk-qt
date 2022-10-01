// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSRESPONSE_H
#define QTAWS_GETFINDINGSRESPONSE_H

#include "securityhubresponse.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetFindingsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetFindingsResponse(const GetFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
