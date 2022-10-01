// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERLOGREQUEST_H
#define QTAWS_GETCONTAINERLOGREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerLogRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerLogRequest : public LightsailRequest {

public:
    GetContainerLogRequest(const GetContainerLogRequest &other);
    GetContainerLogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerLogRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
