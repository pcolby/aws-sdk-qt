// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETREPLICATIONCONFIGURATIONRESPONSE_H

#include "mgnresponse.h"
#include "getreplicationconfigurationrequest.h"

namespace QtAws {
namespace Mgn {

class GetReplicationConfigurationResponsePrivate;

class QTAWSMGN_EXPORT GetReplicationConfigurationResponse : public MgnResponse {
    Q_OBJECT

public:
    GetReplicationConfigurationResponse(const GetReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetReplicationConfigurationResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
