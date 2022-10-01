// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMONPREMISESINSTANCESRESPONSE_H
#define QTAWS_REMOVETAGSFROMONPREMISESINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "removetagsfromonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RemoveTagsFromOnPremisesInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT RemoveTagsFromOnPremisesInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    RemoveTagsFromOnPremisesInstancesResponse(const RemoveTagsFromOnPremisesInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsFromOnPremisesInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromOnPremisesInstancesResponse)
    Q_DISABLE_COPY(RemoveTagsFromOnPremisesInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
