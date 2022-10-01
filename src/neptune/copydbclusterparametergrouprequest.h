// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CopyDBClusterParameterGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT CopyDBClusterParameterGroupRequest : public NeptuneRequest {

public:
    CopyDBClusterParameterGroupRequest(const CopyDBClusterParameterGroupRequest &other);
    CopyDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
