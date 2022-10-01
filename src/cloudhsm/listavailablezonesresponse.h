// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEZONESRESPONSE_H
#define QTAWS_LISTAVAILABLEZONESRESPONSE_H

#include "cloudhsmresponse.h"
#include "listavailablezonesrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListAvailableZonesResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ListAvailableZonesResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ListAvailableZonesResponse(const ListAvailableZonesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableZonesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableZonesResponse)
    Q_DISABLE_COPY(ListAvailableZonesResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
