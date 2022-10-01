// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKREQUEST_H
#define QTAWS_DELETEWEBHOOKREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteWebhookRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT DeleteWebhookRequest : public CodePipelineRequest {

public:
    DeleteWebhookRequest(const DeleteWebhookRequest &other);
    DeleteWebhookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWebhookRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
