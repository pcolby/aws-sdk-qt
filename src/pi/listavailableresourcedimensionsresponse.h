// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEDIMENSIONSRESPONSE_H
#define QTAWS_LISTAVAILABLERESOURCEDIMENSIONSRESPONSE_H

#include "piresponse.h"
#include "listavailableresourcedimensionsrequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceDimensionsResponsePrivate;

class QTAWSPI_EXPORT ListAvailableResourceDimensionsResponse : public PiResponse {
    Q_OBJECT

public:
    ListAvailableResourceDimensionsResponse(const ListAvailableResourceDimensionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableResourceDimensionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableResourceDimensionsResponse)
    Q_DISABLE_COPY(ListAvailableResourceDimensionsResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
