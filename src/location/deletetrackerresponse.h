// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRACKERRESPONSE_H
#define QTAWS_DELETETRACKERRESPONSE_H

#include "locationresponse.h"
#include "deletetrackerrequest.h"

namespace QtAws {
namespace Location {

class DeleteTrackerResponsePrivate;

class QTAWSLOCATION_EXPORT DeleteTrackerResponse : public LocationResponse {
    Q_OBJECT

public:
    DeleteTrackerResponse(const DeleteTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrackerResponse)
    Q_DISABLE_COPY(DeleteTrackerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
