// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMSKILLPARAMETERRESPONSE_H
#define QTAWS_GETROOMSKILLPARAMETERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomSkillParameterResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetRoomSkillParameterResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetRoomSkillParameterResponse(const GetRoomSkillParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoomSkillParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoomSkillParameterResponse)
    Q_DISABLE_COPY(GetRoomSkillParameterResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
