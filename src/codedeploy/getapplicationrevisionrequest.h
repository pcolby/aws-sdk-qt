// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREVISIONREQUEST_H
#define QTAWS_GETAPPLICATIONREVISIONREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetApplicationRevisionRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT GetApplicationRevisionRequest : public CodeDeployRequest {

public:
    GetApplicationRevisionRequest(const GetApplicationRevisionRequest &other);
    GetApplicationRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationRevisionRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
