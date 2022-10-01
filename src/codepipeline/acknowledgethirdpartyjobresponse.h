// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACKNOWLEDGETHIRDPARTYJOBRESPONSE_H
#define QTAWS_ACKNOWLEDGETHIRDPARTYJOBRESPONSE_H

#include "codepipelineresponse.h"
#include "acknowledgethirdpartyjobrequest.h"

namespace QtAws {
namespace CodePipeline {

class AcknowledgeThirdPartyJobResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT AcknowledgeThirdPartyJobResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    AcknowledgeThirdPartyJobResponse(const AcknowledgeThirdPartyJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcknowledgeThirdPartyJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcknowledgeThirdPartyJobResponse)
    Q_DISABLE_COPY(AcknowledgeThirdPartyJobResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
