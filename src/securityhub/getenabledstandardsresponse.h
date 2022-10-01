// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENABLEDSTANDARDSRESPONSE_H
#define QTAWS_GETENABLEDSTANDARDSRESPONSE_H

#include "securityhubresponse.h"
#include "getenabledstandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetEnabledStandardsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetEnabledStandardsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetEnabledStandardsResponse(const GetEnabledStandardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnabledStandardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnabledStandardsResponse)
    Q_DISABLE_COPY(GetEnabledStandardsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
