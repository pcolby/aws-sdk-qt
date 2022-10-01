// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONTACTRESPONSE_H
#define QTAWS_CANCELCONTACTRESPONSE_H

#include "groundstationresponse.h"
#include "cancelcontactrequest.h"

namespace QtAws {
namespace GroundStation {

class CancelContactResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT CancelContactResponse : public GroundStationResponse {
    Q_OBJECT

public:
    CancelContactResponse(const CancelContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelContactResponse)
    Q_DISABLE_COPY(CancelContactResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
