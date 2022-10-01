// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSRESPONSE_H
#define QTAWS_LISTPORTALSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listportalsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListPortalsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListPortalsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListPortalsResponse(const ListPortalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPortalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortalsResponse)
    Q_DISABLE_COPY(ListPortalsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
