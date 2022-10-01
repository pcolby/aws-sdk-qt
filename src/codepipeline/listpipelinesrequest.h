// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESREQUEST_H
#define QTAWS_LISTPIPELINESREQUEST_H

#include "codepipelinerequest.h"

namespace QtAws {
namespace CodePipeline {

class ListPipelinesRequestPrivate;

class QTAWSCODEPIPELINE_EXPORT ListPipelinesRequest : public CodePipelineRequest {

public:
    ListPipelinesRequest(const ListPipelinesRequest &other);
    ListPipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelinesRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
