// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_RESETDBCLUSTERPARAMETERGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ResetDBClusterParameterGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT ResetDBClusterParameterGroupRequest : public NeptuneRequest {

public:
    ResetDBClusterParameterGroupRequest(const ResetDBClusterParameterGroupRequest &other);
    ResetDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDBClusterParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
