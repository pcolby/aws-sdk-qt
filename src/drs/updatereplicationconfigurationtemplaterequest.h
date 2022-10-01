// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationTemplateRequestPrivate;

class QTAWSDRS_EXPORT UpdateReplicationConfigurationTemplateRequest : public DrsRequest {

public:
    UpdateReplicationConfigurationTemplateRequest(const UpdateReplicationConfigurationTemplateRequest &other);
    UpdateReplicationConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationTemplateRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
