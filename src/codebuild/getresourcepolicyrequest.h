// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICYREQUEST_H
#define QTAWS_GETRESOURCEPOLICYREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class GetResourcePolicyRequestPrivate;

class QTAWSCODEBUILD_EXPORT GetResourcePolicyRequest : public CodeBuildRequest {

public:
    GetResourcePolicyRequest(const GetResourcePolicyRequest &other);
    GetResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePolicyRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
