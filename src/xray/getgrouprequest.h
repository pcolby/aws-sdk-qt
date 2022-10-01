// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPREQUEST_H
#define QTAWS_GETGROUPREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetGroupRequestPrivate;

class QTAWSXRAY_EXPORT GetGroupRequest : public XRayRequest {

public:
    GetGroupRequest(const GetGroupRequest &other);
    GetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
