// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINESRESPONSE_H
#define QTAWS_DESCRIBEPIPELINESRESPONSE_H

#include "datapipelineresponse.h"
#include "describepipelinesrequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribePipelinesResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT DescribePipelinesResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    DescribePipelinesResponse(const DescribePipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelinesResponse)
    Q_DISABLE_COPY(DescribePipelinesResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
