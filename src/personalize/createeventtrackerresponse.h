// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTTRACKERRESPONSE_H
#define QTAWS_CREATEEVENTTRACKERRESPONSE_H

#include "personalizeresponse.h"
#include "createeventtrackerrequest.h"

namespace QtAws {
namespace Personalize {

class CreateEventTrackerResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateEventTrackerResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateEventTrackerResponse(const CreateEventTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventTrackerResponse)
    Q_DISABLE_COPY(CreateEventTrackerResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
