// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEREQUEST_H
#define QTAWS_UPDATERESOURCEREQUEST_H

#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class UpdateResourceRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT UpdateResourceRequest : public CloudControlRequest {

public:
    UpdateResourceRequest(const UpdateResourceRequest &other);
    UpdateResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
