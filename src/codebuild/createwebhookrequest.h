// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBHOOKREQUEST_H
#define QTAWS_CREATEWEBHOOKREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class CreateWebhookRequestPrivate;

class QTAWSCODEBUILD_EXPORT CreateWebhookRequest : public CodeBuildRequest {

public:
    CreateWebhookRequest(const CreateWebhookRequest &other);
    CreateWebhookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
