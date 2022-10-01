// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESRESPONSE_H
#define QTAWS_LISTSECURITYPROFILESRESPONSE_H

#include "iotresponse.h"
#include "listsecurityprofilesrequest.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesResponsePrivate;

class QTAWSIOT_EXPORT ListSecurityProfilesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListSecurityProfilesResponse(const ListSecurityProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityProfilesResponse)
    Q_DISABLE_COPY(ListSecurityProfilesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
