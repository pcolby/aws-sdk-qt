// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEVICESRESPONSE_H
#define QTAWS_LISTCOREDEVICESRESPONSE_H

#include "greengrassv2response.h"
#include "listcoredevicesrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListCoreDevicesResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ListCoreDevicesResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ListCoreDevicesResponse(const ListCoreDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCoreDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreDevicesResponse)
    Q_DISABLE_COPY(ListCoreDevicesResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
