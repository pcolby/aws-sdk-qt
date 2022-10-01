// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKPROFILESRESPONSE_H
#define QTAWS_LISTNETWORKPROFILESRESPONSE_H

#include "devicefarmresponse.h"
#include "listnetworkprofilesrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListNetworkProfilesResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListNetworkProfilesResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListNetworkProfilesResponse(const ListNetworkProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworkProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkProfilesResponse)
    Q_DISABLE_COPY(ListNetworkProfilesResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
