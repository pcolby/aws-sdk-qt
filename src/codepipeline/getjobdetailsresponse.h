// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDETAILSRESPONSE_H
#define QTAWS_GETJOBDETAILSRESPONSE_H

#include "codepipelineresponse.h"
#include "getjobdetailsrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetJobDetailsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetJobDetailsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetJobDetailsResponse(const GetJobDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobDetailsResponse)
    Q_DISABLE_COPY(GetJobDetailsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
