// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSKILLRESPONSE_H
#define QTAWS_REJECTSKILLRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "rejectskillrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RejectSkillResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT RejectSkillResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    RejectSkillResponse(const RejectSkillRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectSkillRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectSkillResponse)
    Q_DISABLE_COPY(RejectSkillResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
