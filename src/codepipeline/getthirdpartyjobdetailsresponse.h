// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYJOBDETAILSRESPONSE_H
#define QTAWS_GETTHIRDPARTYJOBDETAILSRESPONSE_H

#include "codepipelineresponse.h"
#include "getthirdpartyjobdetailsrequest.h"

namespace QtAws {
namespace CodePipeline {

class GetThirdPartyJobDetailsResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetThirdPartyJobDetailsResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetThirdPartyJobDetailsResponse(const GetThirdPartyJobDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThirdPartyJobDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThirdPartyJobDetailsResponse)
    Q_DISABLE_COPY(GetThirdPartyJobDetailsResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
