// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROOMSKILLPARAMETERRESPONSE_H
#define QTAWS_PUTROOMSKILLPARAMETERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "putroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutRoomSkillParameterResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutRoomSkillParameterResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    PutRoomSkillParameterResponse(const PutRoomSkillParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRoomSkillParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRoomSkillParameterResponse)
    Q_DISABLE_COPY(PutRoomSkillParameterResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
