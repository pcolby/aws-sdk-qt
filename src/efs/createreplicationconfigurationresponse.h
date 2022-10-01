// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONRESPONSE_H

#include "efsresponse.h"
#include "createreplicationconfigurationrequest.h"

namespace QtAws {
namespace Efs {

class CreateReplicationConfigurationResponsePrivate;

class QTAWSEFS_EXPORT CreateReplicationConfigurationResponse : public EfsResponse {
    Q_OBJECT

public:
    CreateReplicationConfigurationResponse(const CreateReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationConfigurationResponse)
    Q_DISABLE_COPY(CreateReplicationConfigurationResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
