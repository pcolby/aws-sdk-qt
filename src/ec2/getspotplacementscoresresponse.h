// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPOTPLACEMENTSCORESRESPONSE_H
#define QTAWS_GETSPOTPLACEMENTSCORESRESPONSE_H

#include "ec2response.h"
#include "getspotplacementscoresrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSpotPlacementScoresResponsePrivate;

class QTAWSEC2_EXPORT GetSpotPlacementScoresResponse : public Ec2Response {
    Q_OBJECT

public:
    GetSpotPlacementScoresResponse(const GetSpotPlacementScoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSpotPlacementScoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSpotPlacementScoresResponse)
    Q_DISABLE_COPY(GetSpotPlacementScoresResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
