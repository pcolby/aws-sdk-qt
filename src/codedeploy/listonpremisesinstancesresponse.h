// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTONPREMISESINSTANCESRESPONSE_H
#define QTAWS_LISTONPREMISESINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "listonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListOnPremisesInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListOnPremisesInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListOnPremisesInstancesResponse(const ListOnPremisesInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOnPremisesInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOnPremisesInstancesResponse)
    Q_DISABLE_COPY(ListOnPremisesInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
