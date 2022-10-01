// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEELASTICIPRESPONSE_H
#define QTAWS_ASSOCIATEELASTICIPRESPONSE_H

#include "opsworksresponse.h"
#include "associateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class AssociateElasticIpResponsePrivate;

class QTAWSOPSWORKS_EXPORT AssociateElasticIpResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    AssociateElasticIpResponse(const AssociateElasticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateElasticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateElasticIpResponse)
    Q_DISABLE_COPY(AssociateElasticIpResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
