// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTANDARDSCONTROLRESPONSE_H
#define QTAWS_UPDATESTANDARDSCONTROLRESPONSE_H

#include "securityhubresponse.h"
#include "updatestandardscontrolrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateStandardsControlResponsePrivate;

class QTAWSSECURITYHUB_EXPORT UpdateStandardsControlResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    UpdateStandardsControlResponse(const UpdateStandardsControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStandardsControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStandardsControlResponse)
    Q_DISABLE_COPY(UpdateStandardsControlResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
