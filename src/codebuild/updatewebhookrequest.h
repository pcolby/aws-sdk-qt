// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWEBHOOKREQUEST_H
#define QTAWS_UPDATEWEBHOOKREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateWebhookRequestPrivate;

class QTAWSCODEBUILD_EXPORT UpdateWebhookRequest : public CodeBuildRequest {

public:
    UpdateWebhookRequest(const UpdateWebhookRequest &other);
    UpdateWebhookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
