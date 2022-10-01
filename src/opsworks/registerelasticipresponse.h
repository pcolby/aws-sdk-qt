// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERELASTICIPRESPONSE_H
#define QTAWS_REGISTERELASTICIPRESPONSE_H

#include "opsworksresponse.h"
#include "registerelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterElasticIpResponsePrivate;

class QTAWSOPSWORKS_EXPORT RegisterElasticIpResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    RegisterElasticIpResponse(const RegisterElasticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterElasticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterElasticIpResponse)
    Q_DISABLE_COPY(RegisterElasticIpResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
