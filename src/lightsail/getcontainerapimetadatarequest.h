// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERAPIMETADATAREQUEST_H
#define QTAWS_GETCONTAINERAPIMETADATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerAPIMetadataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerAPIMetadataRequest : public LightsailRequest {

public:
    GetContainerAPIMetadataRequest(const GetContainerAPIMetadataRequest &other);
    GetContainerAPIMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerAPIMetadataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
