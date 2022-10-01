// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_DELETECLUSTERPARAMETERGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterParameterGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterParameterGroupRequest : public RedshiftRequest {

public:
    DeleteClusterParameterGroupRequest(const DeleteClusterParameterGroupRequest &other);
    DeleteClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
