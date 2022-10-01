// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSOLUTIONVERSIONCREATIONRESPONSE_H
#define QTAWS_STOPSOLUTIONVERSIONCREATIONRESPONSE_H

#include "personalizeresponse.h"
#include "stopsolutionversioncreationrequest.h"

namespace QtAws {
namespace Personalize {

class StopSolutionVersionCreationResponsePrivate;

class QTAWSPERSONALIZE_EXPORT StopSolutionVersionCreationResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    StopSolutionVersionCreationResponse(const StopSolutionVersionCreationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopSolutionVersionCreationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSolutionVersionCreationResponse)
    Q_DISABLE_COPY(StopSolutionVersionCreationResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
