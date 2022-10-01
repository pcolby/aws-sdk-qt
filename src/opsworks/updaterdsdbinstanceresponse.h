// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERDSDBINSTANCERESPONSE_H
#define QTAWS_UPDATERDSDBINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "updaterdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateRdsDbInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT UpdateRdsDbInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UpdateRdsDbInstanceResponse(const UpdateRdsDbInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRdsDbInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRdsDbInstanceResponse)
    Q_DISABLE_COPY(UpdateRdsDbInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
