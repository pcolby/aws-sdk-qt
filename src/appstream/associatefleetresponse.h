// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFLEETRESPONSE_H
#define QTAWS_ASSOCIATEFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "associatefleetrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT AssociateFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    AssociateFleetResponse(const AssociateFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFleetResponse)
    Q_DISABLE_COPY(AssociateFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
