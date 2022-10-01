// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOONPREMISESINSTANCESREQUEST_H
#define QTAWS_ADDTAGSTOONPREMISESINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class AddTagsToOnPremisesInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT AddTagsToOnPremisesInstancesRequest : public CodeDeployRequest {

public:
    AddTagsToOnPremisesInstancesRequest(const AddTagsToOnPremisesInstancesRequest &other);
    AddTagsToOnPremisesInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
