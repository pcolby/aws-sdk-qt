// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONHISTORYRESPONSE_P_H
#define QTAWS_LISTCONFIGURATIONHISTORYRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class ListConfigurationHistoryResponse;

class ListConfigurationHistoryResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit ListConfigurationHistoryResponsePrivate(ListConfigurationHistoryResponse * const q);

    void parseListConfigurationHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConfigurationHistoryResponse)
    Q_DISABLE_COPY(ListConfigurationHistoryResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
