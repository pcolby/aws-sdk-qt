// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONRESPONSE_H

#include "drsresponse.h"
#include "updatereplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationResponsePrivate;

class QTAWSDRS_EXPORT UpdateReplicationConfigurationResponse : public DrsResponse {
    Q_OBJECT

public:
    UpdateReplicationConfigurationResponse(const UpdateReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
