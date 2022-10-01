// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTREPLICATIONCONFIGURATIONRESPONSE_H

#include "ecrresponse.h"
#include "putreplicationconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutReplicationConfigurationResponsePrivate;

class QTAWSECR_EXPORT PutReplicationConfigurationResponse : public EcrResponse {
    Q_OBJECT

public:
    PutReplicationConfigurationResponse(const PutReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutReplicationConfigurationResponse)
    Q_DISABLE_COPY(PutReplicationConfigurationResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
