// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESREQUEST_H
#define QTAWS_LISTPIPELINESREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ListPipelinesRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT ListPipelinesRequest : public DataPipelineRequest {

public:
    ListPipelinesRequest(const ListPipelinesRequest &other);
    ListPipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelinesRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
