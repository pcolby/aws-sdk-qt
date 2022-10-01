// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATEREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DeleteReplicationConfigurationTemplateRequestPrivate;

class QTAWSDRS_EXPORT DeleteReplicationConfigurationTemplateRequest : public DrsRequest {

public:
    DeleteReplicationConfigurationTemplateRequest(const DeleteReplicationConfigurationTemplateRequest &other);
    DeleteReplicationConfigurationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationConfigurationTemplateRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
