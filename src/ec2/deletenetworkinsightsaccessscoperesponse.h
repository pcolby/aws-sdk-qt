// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPERESPONSE_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPERESPONSE_H

#include "ec2response.h"
#include "deletenetworkinsightsaccessscoperequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAccessScopeResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInsightsAccessScopeResponse(const DeleteNetworkInsightsAccessScopeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInsightsAccessScopeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAccessScopeResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAccessScopeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
