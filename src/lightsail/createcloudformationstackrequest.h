// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONSTACKREQUEST_H
#define QTAWS_CREATECLOUDFORMATIONSTACKREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCloudFormationStackRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateCloudFormationStackRequest : public LightsailRequest {

public:
    CreateCloudFormationStackRequest(const CreateCloudFormationStackRequest &other);
    CreateCloudFormationStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationStackRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
