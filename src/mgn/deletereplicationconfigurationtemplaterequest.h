// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DeleteReplicationConfigurationTemplateRequestPrivate;

class QTAWSMGN_EXPORT DeleteReplicationConfigurationTemplateRequest : public MgnRequest {

public:
    DeleteReplicationConfigurationTemplateRequest(const DeleteReplicationConfigurationTemplateRequest &other);
    DeleteReplicationConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationConfigurationTemplateRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
