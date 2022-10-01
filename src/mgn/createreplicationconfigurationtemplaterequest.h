// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class CreateReplicationConfigurationTemplateRequestPrivate;

class QTAWSMGN_EXPORT CreateReplicationConfigurationTemplateRequest : public MgnRequest {

public:
    CreateReplicationConfigurationTemplateRequest(const CreateReplicationConfigurationTemplateRequest &other);
    CreateReplicationConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
