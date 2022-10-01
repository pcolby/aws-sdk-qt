// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSRESPONSE_H
#define QTAWS_CONNECTCAMPAIGNSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsconnectcampaignsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ConnectCampaignsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ConnectCampaignsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ConnectCampaignsResponse(ConnectCampaignsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectCampaignsResponse)
    Q_DISABLE_COPY(ConnectCampaignsResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
