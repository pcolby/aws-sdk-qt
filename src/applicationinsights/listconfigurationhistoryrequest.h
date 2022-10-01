// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONHISTORYREQUEST_H
#define QTAWS_LISTCONFIGURATIONHISTORYREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ListConfigurationHistoryRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ListConfigurationHistoryRequest : public ApplicationInsightsRequest {

public:
    ListConfigurationHistoryRequest(const ListConfigurationHistoryRequest &other);
    ListConfigurationHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationHistoryRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
