// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSIGHTRESPONSE_H
#define QTAWS_UPDATEINSIGHTRESPONSE_H

#include "securityhubresponse.h"
#include "updateinsightrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateInsightResponsePrivate;

class QTAWSSECURITYHUB_EXPORT UpdateInsightResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    UpdateInsightResponse(const UpdateInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInsightResponse)
    Q_DISABLE_COPY(UpdateInsightResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
