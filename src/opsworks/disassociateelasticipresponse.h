// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEELASTICIPRESPONSE_H
#define QTAWS_DISASSOCIATEELASTICIPRESPONSE_H

#include "opsworksresponse.h"
#include "disassociateelasticiprequest.h"

namespace QtAws {
namespace OpsWorks {

class DisassociateElasticIpResponsePrivate;

class QTAWSOPSWORKS_EXPORT DisassociateElasticIpResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DisassociateElasticIpResponse(const DisassociateElasticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateElasticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateElasticIpResponse)
    Q_DISABLE_COPY(DisassociateElasticIpResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
