// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTSUMMARYRESPONSE_H
#define QTAWS_GETCONTENTSUMMARYRESPONSE_H

#include "wisdomresponse.h"
#include "getcontentsummaryrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentSummaryResponsePrivate;

class QTAWSWISDOM_EXPORT GetContentSummaryResponse : public WisdomResponse {
    Q_OBJECT

public:
    GetContentSummaryResponse(const GetContentSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContentSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentSummaryResponse)
    Q_DISABLE_COPY(GetContentSummaryResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
