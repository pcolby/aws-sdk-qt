// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTFORECASTREQUEST_H
#define QTAWS_GETCOSTFORECASTREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostForecastRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostForecastRequest : public CostExplorerRequest {

public:
    GetCostForecastRequest(const GetCostForecastRequest &other);
    GetCostForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostForecastRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
