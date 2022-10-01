// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTRESPONSE_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTRESPONSE_H

#include "ec2response.h"
#include "getnetworkinsightsaccessscopecontentrequest.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeContentResponsePrivate;

class QTAWSEC2_EXPORT GetNetworkInsightsAccessScopeContentResponse : public Ec2Response {
    Q_OBJECT

public:
    GetNetworkInsightsAccessScopeContentResponse(const GetNetworkInsightsAccessScopeContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkInsightsAccessScopeContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkInsightsAccessScopeContentResponse)
    Q_DISABLE_COPY(GetNetworkInsightsAccessScopeContentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
