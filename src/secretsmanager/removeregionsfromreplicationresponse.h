// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONSFROMREPLICATIONRESPONSE_H
#define QTAWS_REMOVEREGIONSFROMREPLICATIONRESPONSE_H

#include "secretsmanagerresponse.h"
#include "removeregionsfromreplicationrequest.h"

namespace QtAws {
namespace SecretsManager {

class RemoveRegionsFromReplicationResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT RemoveRegionsFromReplicationResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    RemoveRegionsFromReplicationResponse(const RemoveRegionsFromReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveRegionsFromReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRegionsFromReplicationResponse)
    Q_DISABLE_COPY(RemoveRegionsFromReplicationResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
