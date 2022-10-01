// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSKILLAUTHORIZATIONRESPONSE_H
#define QTAWS_PUTSKILLAUTHORIZATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "putskillauthorizationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutSkillAuthorizationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutSkillAuthorizationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    PutSkillAuthorizationResponse(const PutSkillAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSkillAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSkillAuthorizationResponse)
    Q_DISABLE_COPY(PutSkillAuthorizationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
