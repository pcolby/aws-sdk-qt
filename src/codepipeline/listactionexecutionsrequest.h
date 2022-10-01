// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONEXECUTIONSREQUEST_H
#define QTAWS_LISTACTIONEXECUTIONSREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class ListActionExecutionsRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT ListActionExecutionsRequest : public CodePipelineRequest {

public:
    ListActionExecutionsRequest(const ListActionExecutionsRequest &other);
    ListActionExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionExecutionsRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
