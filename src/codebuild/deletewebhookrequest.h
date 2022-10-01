// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKREQUEST_H
#define QTAWS_DELETEWEBHOOKREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteWebhookRequestPrivate;

class QTAWSCODEBUILD_EXPORT DeleteWebhookRequest : public CodeBuildRequest {

public:
    DeleteWebhookRequest(const DeleteWebhookRequest &other);
    DeleteWebhookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebhookRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
