// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSTREAMCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEAUDITSTREAMCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "updateauditstreamconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateAuditStreamConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateAuditStreamConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateAuditStreamConfigurationResponse(const UpdateAuditStreamConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAuditStreamConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuditStreamConfigurationResponse)
    Q_DISABLE_COPY(UpdateAuditStreamConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
