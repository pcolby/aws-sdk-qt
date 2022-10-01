// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONHISTORYRESPONSE_H
#define QTAWS_LISTCONFIGURATIONHISTORYRESPONSE_H

#include "applicationinsightsresponse.h"
#include "listconfigurationhistoryrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListConfigurationHistoryResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListConfigurationHistoryResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    ListConfigurationHistoryResponse(const ListConfigurationHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationHistoryResponse)
    Q_DISABLE_COPY(ListConfigurationHistoryResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
