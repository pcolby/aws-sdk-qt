// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRACKERRESPONSE_H
#define QTAWS_CREATETRACKERRESPONSE_H

#include "locationresponse.h"
#include "createtrackerrequest.h"

namespace QtAws {
namespace Location {

class CreateTrackerResponsePrivate;

class QTAWSLOCATION_EXPORT CreateTrackerResponse : public LocationResponse {
    Q_OBJECT

public:
    CreateTrackerResponse(const CreateTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrackerResponse)
    Q_DISABLE_COPY(CreateTrackerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
