// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPROFILESRESPONSE_H
#define QTAWS_LISTSERVICEPROFILESRESPONSE_H

#include "iotwirelessresponse.h"
#include "listserviceprofilesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListServiceProfilesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListServiceProfilesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListServiceProfilesResponse(const ListServiceProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceProfilesResponse)
    Q_DISABLE_COPY(ListServiceProfilesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
