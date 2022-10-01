// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINBOUNDDMARCSETTINGSRESPONSE_H
#define QTAWS_PUTINBOUNDDMARCSETTINGSRESPONSE_H

#include "workmailresponse.h"
#include "putinbounddmarcsettingsrequest.h"

namespace QtAws {
namespace WorkMail {

class PutInboundDmarcSettingsResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutInboundDmarcSettingsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutInboundDmarcSettingsResponse(const PutInboundDmarcSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInboundDmarcSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInboundDmarcSettingsResponse)
    Q_DISABLE_COPY(PutInboundDmarcSettingsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
