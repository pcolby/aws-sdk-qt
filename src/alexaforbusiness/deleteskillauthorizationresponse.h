// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETESKILLAUTHORIZATIONRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteskillauthorizationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillAuthorizationResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteSkillAuthorizationResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteSkillAuthorizationResponse(const DeleteSkillAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSkillAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSkillAuthorizationResponse)
    Q_DISABLE_COPY(DeleteSkillAuthorizationResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
