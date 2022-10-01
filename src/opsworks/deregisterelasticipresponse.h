// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERELASTICIPRESPONSE_H
#define QTAWS_DEREGISTERELASTICIPRESPONSE_H

#include "opsworksresponse.h"
#include "deregisterelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterElasticIpResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeregisterElasticIpResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeregisterElasticIpResponse(const DeregisterElasticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterElasticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterElasticIpResponse)
    Q_DISABLE_COPY(DeregisterElasticIpResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
