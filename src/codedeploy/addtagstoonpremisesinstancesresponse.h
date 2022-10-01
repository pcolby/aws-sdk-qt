// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOONPREMISESINSTANCESRESPONSE_H
#define QTAWS_ADDTAGSTOONPREMISESINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "addtagstoonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class AddTagsToOnPremisesInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT AddTagsToOnPremisesInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    AddTagsToOnPremisesInstancesResponse(const AddTagsToOnPremisesInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToOnPremisesInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToOnPremisesInstancesResponse)
    Q_DISABLE_COPY(AddTagsToOnPremisesInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
