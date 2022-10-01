// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALCLUSTERREQUEST_H
#define QTAWS_FAILOVERGLOBALCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class FailoverGlobalClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT FailoverGlobalClusterRequest : public NeptuneRequest {

public:
    FailoverGlobalClusterRequest(const FailoverGlobalClusterRequest &other);
    FailoverGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
