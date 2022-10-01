// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGEJOBRESPONSE_H
#define QTAWS_ACKNOWLEDGEJOBRESPONSE_H

#include "codepipelineresponse.h"
#include "acknowledgejobrequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeJobResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT AcknowledgeJobResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    AcknowledgeJobResponse(const AcknowledgeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcknowledgeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeJobResponse)
    Q_DISABLE_COPY(AcknowledgeJobResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
