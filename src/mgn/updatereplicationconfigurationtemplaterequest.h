// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationTemplateRequestPrivate;

class QTAWSMGN_EXPORT UpdateReplicationConfigurationTemplateRequest : public MgnRequest {

public:
    UpdateReplicationConfigurationTemplateRequest(const UpdateReplicationConfigurationTemplateRequest &other);
    UpdateReplicationConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
