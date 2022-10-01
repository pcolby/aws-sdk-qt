// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONFLEETRESPONSE_H
#define QTAWS_ASSOCIATEAPPLICATIONFLEETRESPONSE_H

#include "appstreamresponse.h"
#include "associateapplicationfleetrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationFleetResponsePrivate;

class QTAWSAPPSTREAM_EXPORT AssociateApplicationFleetResponse : public AppStreamResponse {
    Q_OBJECT

public:
    AssociateApplicationFleetResponse(const AssociateApplicationFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateApplicationFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApplicationFleetResponse)
    Q_DISABLE_COPY(AssociateApplicationFleetResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
