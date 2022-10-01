// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHRESPONSE_H
#define QTAWS_ELASTICSEARCHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawselasticsearchglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT ElasticsearchResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ElasticsearchResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ElasticsearchResponse(ElasticsearchResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticsearchResponse)
    Q_DISABLE_COPY(ElasticsearchResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
