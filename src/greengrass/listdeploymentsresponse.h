// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSRESPONSE_H
#define QTAWS_LISTDEPLOYMENTSRESPONSE_H

#include "greengrassresponse.h"
#include "listdeploymentsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListDeploymentsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListDeploymentsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListDeploymentsResponse(const ListDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeploymentsResponse)
    Q_DISABLE_COPY(ListDeploymentsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
