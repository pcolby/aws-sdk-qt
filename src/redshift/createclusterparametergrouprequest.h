// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_CREATECLUSTERPARAMETERGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterParameterGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterParameterGroupRequest : public RedshiftRequest {

public:
    CreateClusterParameterGroupRequest(const CreateClusterParameterGroupRequest &other);
    CreateClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
