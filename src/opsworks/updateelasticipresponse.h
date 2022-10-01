// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEELASTICIPRESPONSE_H
#define QTAWS_UPDATEELASTICIPRESPONSE_H

#include "opsworksresponse.h"
#include "updateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateElasticIpResponsePrivate;

class QTAWSOPSWORKS_EXPORT UpdateElasticIpResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UpdateElasticIpResponse(const UpdateElasticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateElasticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateElasticIpResponse)
    Q_DISABLE_COPY(UpdateElasticIpResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
