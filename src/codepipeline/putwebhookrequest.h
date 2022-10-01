// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWEBHOOKREQUEST_H
#define QTAWS_PUTWEBHOOKREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutWebhookRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutWebhookRequest : public CodePipelineRequest {

public:
    PutWebhookRequest(const PutWebhookRequest &other);
    PutWebhookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutWebhookRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
