// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSTREAMCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEAUDITSTREAMCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateAuditStreamConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT UpdateAuditStreamConfigurationRequest : public WorkLinkRequest {

public:
    UpdateAuditStreamConfigurationRequest(const UpdateAuditStreamConfigurationRequest &other);
    UpdateAuditStreamConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuditStreamConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
