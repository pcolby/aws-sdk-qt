// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSREQUEST_H
#define QTAWS_GETGROUPSREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetGroupsRequestPrivate;

class QTAWSXRAY_EXPORT GetGroupsRequest : public XRayRequest {

public:
    GetGroupsRequest(const GetGroupsRequest &other);
    GetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
