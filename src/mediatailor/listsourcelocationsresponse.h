// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCELOCATIONSRESPONSE_H
#define QTAWS_LISTSOURCELOCATIONSRESPONSE_H

#include "mediatailorresponse.h"
#include "listsourcelocationsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListSourceLocationsResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListSourceLocationsResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListSourceLocationsResponse(const ListSourceLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSourceLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSourceLocationsResponse)
    Q_DISABLE_COPY(ListSourceLocationsResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
