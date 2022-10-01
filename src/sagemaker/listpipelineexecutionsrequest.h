// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSREQUEST_H
#define QTAWS_LISTPIPELINEEXECUTIONSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListPipelineExecutionsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListPipelineExecutionsRequest : public SageMakerRequest {

public:
    ListPipelineExecutionsRequest(const ListPipelineExecutionsRequest &other);
    ListPipelineExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelineExecutionsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
