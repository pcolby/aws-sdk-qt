// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRDSDBINSTANCERESPONSE_H
#define QTAWS_DEREGISTERRDSDBINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "deregisterrdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterRdsDbInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeregisterRdsDbInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeregisterRdsDbInstanceResponse(const DeregisterRdsDbInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterRdsDbInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterRdsDbInstanceResponse)
    Q_DISABLE_COPY(DeregisterRdsDbInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
