// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTACCESSREQUEST_H
#define QTAWS_MODIFYENDPOINTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyEndpointAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyEndpointAccessRequest : public RedshiftRequest {

public:
    ModifyEndpointAccessRequest(const ModifyEndpointAccessRequest &other);
    ModifyEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
