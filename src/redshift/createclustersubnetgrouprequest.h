// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSUBNETGROUPREQUEST_H
#define QTAWS_CREATECLUSTERSUBNETGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSubnetGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSubnetGroupRequest : public RedshiftRequest {

public:
    CreateClusterSubnetGroupRequest(const CreateClusterSubnetGroupRequest &other);
    CreateClusterSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSubnetGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
