// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABILITYCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTAVAILABILITYCONFIGURATIONSRESPONSE_H

#include "workmailresponse.h"
#include "listavailabilityconfigurationsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAvailabilityConfigurationsResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListAvailabilityConfigurationsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListAvailabilityConfigurationsResponse(const ListAvailabilityConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailabilityConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailabilityConfigurationsResponse)
    Q_DISABLE_COPY(ListAvailabilityConfigurationsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
