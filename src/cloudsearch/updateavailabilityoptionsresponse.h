// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYOPTIONSRESPONSE_H
#define QTAWS_UPDATEAVAILABILITYOPTIONSRESPONSE_H

#include "cloudsearchresponse.h"
#include "updateavailabilityoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateAvailabilityOptionsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateAvailabilityOptionsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    UpdateAvailabilityOptionsResponse(const UpdateAvailabilityOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAvailabilityOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAvailabilityOptionsResponse)
    Q_DISABLE_COPY(UpdateAvailabilityOptionsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
