// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONRESPONSE_H

#include "drsresponse.h"
#include "getfailbackreplicationconfigurationrequest.h"

namespace QtAws {
namespace Drs {

class GetFailbackReplicationConfigurationResponsePrivate;

class QTAWSDRS_EXPORT GetFailbackReplicationConfigurationResponse : public DrsResponse {
    Q_OBJECT

public:
    GetFailbackReplicationConfigurationResponse(const GetFailbackReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFailbackReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFailbackReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetFailbackReplicationConfigurationResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
