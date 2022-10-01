// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBCLUSTERREQUEST_H
#define QTAWS_STARTDBCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class StartDBClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT StartDBClusterRequest : public NeptuneRequest {

public:
    StartDBClusterRequest(const StartDBClusterRequest &other);
    StartDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
