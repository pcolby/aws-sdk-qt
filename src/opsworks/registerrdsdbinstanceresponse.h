// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRDSDBINSTANCERESPONSE_H
#define QTAWS_REGISTERRDSDBINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "registerrdsdbinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterRdsDbInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT RegisterRdsDbInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    RegisterRdsDbInstanceResponse(const RegisterRdsDbInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterRdsDbInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterRdsDbInstanceResponse)
    Q_DISABLE_COPY(RegisterRdsDbInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
