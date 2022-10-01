// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateUsageReportSubscriptionResponse;

class CreateUsageReportSubscriptionResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateUsageReportSubscriptionResponsePrivate(CreateUsageReportSubscriptionResponse * const q);

    void parseCreateUsageReportSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUsageReportSubscriptionResponse)
    Q_DISABLE_COPY(CreateUsageReportSubscriptionResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
