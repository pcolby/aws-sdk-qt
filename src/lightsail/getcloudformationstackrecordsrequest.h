// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONSTACKRECORDSREQUEST_H
#define QTAWS_GETCLOUDFORMATIONSTACKRECORDSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetCloudFormationStackRecordsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetCloudFormationStackRecordsRequest : public LightsailRequest {

public:
    GetCloudFormationStackRecordsRequest(const GetCloudFormationStackRecordsRequest &other);
    GetCloudFormationStackRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFormationStackRecordsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
