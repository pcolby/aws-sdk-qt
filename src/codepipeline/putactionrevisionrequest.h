// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACTIONREVISIONREQUEST_H
#define QTAWS_PUTACTIONREVISIONREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class PutActionRevisionRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT PutActionRevisionRequest : public CodePipelineRequest {

public:
    PutActionRevisionRequest(const PutActionRevisionRequest &other);
    PutActionRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutActionRevisionRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
