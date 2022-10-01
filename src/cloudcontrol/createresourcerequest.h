// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEREQUEST_H
#define QTAWS_CREATERESOURCEREQUEST_H

#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class CreateResourceRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT CreateResourceRequest : public CloudControlRequest {

public:
    CreateResourceRequest(const CreateResourceRequest &other);
    CreateResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
