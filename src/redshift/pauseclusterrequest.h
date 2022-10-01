// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECLUSTERREQUEST_H
#define QTAWS_PAUSECLUSTERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class PauseClusterRequestPrivate;

class QTAWSREDSHIFT_EXPORT PauseClusterRequest : public RedshiftRequest {

public:
    PauseClusterRequest(const PauseClusterRequest &other);
    PauseClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
