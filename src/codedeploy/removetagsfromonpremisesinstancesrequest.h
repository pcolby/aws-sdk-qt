// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMONPREMISESINSTANCESREQUEST_H
#define QTAWS_REMOVETAGSFROMONPREMISESINSTANCESREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RemoveTagsFromOnPremisesInstancesRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT RemoveTagsFromOnPremisesInstancesRequest : public CodeDeployRequest {

public:
    RemoveTagsFromOnPremisesInstancesRequest(const RemoveTagsFromOnPremisesInstancesRequest &other);
    RemoveTagsFromOnPremisesInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
