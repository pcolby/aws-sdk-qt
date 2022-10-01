// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCERESPONSE_H
#define QTAWS_REGISTERINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "registerinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT RegisterInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    RegisterInstanceResponse(const RegisterInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstanceResponse)
    Q_DISABLE_COPY(RegisterInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
