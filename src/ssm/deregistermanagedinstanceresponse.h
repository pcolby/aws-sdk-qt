// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMANAGEDINSTANCERESPONSE_H
#define QTAWS_DEREGISTERMANAGEDINSTANCERESPONSE_H

#include "ssmresponse.h"
#include "deregistermanagedinstancerequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterManagedInstanceResponsePrivate;

class QTAWSSSM_EXPORT DeregisterManagedInstanceResponse : public SsmResponse {
    Q_OBJECT

public:
    DeregisterManagedInstanceResponse(const DeregisterManagedInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterManagedInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterManagedInstanceResponse)
    Q_DISABLE_COPY(DeregisterManagedInstanceResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
