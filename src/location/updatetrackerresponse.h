// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRACKERRESPONSE_H
#define QTAWS_UPDATETRACKERRESPONSE_H

#include "locationresponse.h"
#include "updatetrackerrequest.h"

namespace QtAws {
namespace Location {

class UpdateTrackerResponsePrivate;

class QTAWSLOCATION_EXPORT UpdateTrackerResponse : public LocationResponse {
    Q_OBJECT

public:
    UpdateTrackerResponse(const UpdateTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrackerResponse)
    Q_DISABLE_COPY(UpdateTrackerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
