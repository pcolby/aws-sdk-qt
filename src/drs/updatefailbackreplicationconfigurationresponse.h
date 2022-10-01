// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONRESPONSE_H

#include "drsresponse.h"
#include "updatefailbackreplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class UpdateFailbackReplicationConfigurationResponsePrivate;

class QTAWSDRS_EXPORT UpdateFailbackReplicationConfigurationResponse : public DrsResponse {
    Q_OBJECT

public:
    UpdateFailbackReplicationConfigurationResponse(const UpdateFailbackReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFailbackReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFailbackReplicationConfigurationResponse)
    Q_DISABLE_COPY(UpdateFailbackReplicationConfigurationResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
