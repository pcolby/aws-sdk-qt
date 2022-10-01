// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSUBNETGROUPREQUEST_H
#define QTAWS_DELETECLUSTERSUBNETGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSubnetGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSubnetGroupRequest : public RedshiftRequest {

public:
    DeleteClusterSubnetGroupRequest(const DeleteClusterSubnetGroupRequest &other);
    DeleteClusterSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSubnetGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
