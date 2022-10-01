// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEACTIVEVERSIONREQUEST_H
#define QTAWS_UPDATETEMPLATEACTIVEVERSIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateTemplateActiveVersionRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateTemplateActiveVersionRequest : public PinpointRequest {

public:
    UpdateTemplateActiveVersionRequest(const UpdateTemplateActiveVersionRequest &other);
    UpdateTemplateActiveVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateActiveVersionRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
