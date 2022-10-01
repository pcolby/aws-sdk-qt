// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESRESPONSE_H
#define QTAWS_LISTPIPELINESRESPONSE_H

#include "datapipelineresponse.h"
#include "listpipelinesrequest.h"

namespace QtAws {
namespace DataPipeline {

class ListPipelinesResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT ListPipelinesResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    ListPipelinesResponse(const ListPipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPipelinesResponse)
    Q_DISABLE_COPY(ListPipelinesResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
