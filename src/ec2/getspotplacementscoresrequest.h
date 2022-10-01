// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPOTPLACEMENTSCORESREQUEST_H
#define QTAWS_GETSPOTPLACEMENTSCORESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetSpotPlacementScoresRequestPrivate;

class QTAWSEC2_EXPORT GetSpotPlacementScoresRequest : public Ec2Request {

public:
    GetSpotPlacementScoresRequest(const GetSpotPlacementScoresRequest &other);
    GetSpotPlacementScoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSpotPlacementScoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
