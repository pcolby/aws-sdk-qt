// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPLICATIONREVISIONREQUEST_H
#define QTAWS_REGISTERAPPLICATIONREVISIONREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterApplicationRevisionRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT RegisterApplicationRevisionRequest : public CodeDeployRequest {

public:
    RegisterApplicationRevisionRequest(const RegisterApplicationRevisionRequest &other);
    RegisterApplicationRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterApplicationRevisionRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
