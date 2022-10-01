// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSRESPONSE_H

#include "shieldresponse.h"
#include "describeemergencycontactsettingsrequest.h"

namespace QtAws {
namespace Shield {

class DescribeEmergencyContactSettingsResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeEmergencyContactSettingsResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeEmergencyContactSettingsResponse(const DescribeEmergencyContactSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEmergencyContactSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEmergencyContactSettingsResponse)
    Q_DISABLE_COPY(DescribeEmergencyContactSettingsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
