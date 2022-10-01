// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMSKILLPARAMETERRESPONSE_H
#define QTAWS_DELETEROOMSKILLPARAMETERRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteroomskillparameterrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteRoomSkillParameterResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteRoomSkillParameterResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteRoomSkillParameterResponse(const DeleteRoomSkillParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoomSkillParameterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomSkillParameterResponse)
    Q_DISABLE_COPY(DeleteRoomSkillParameterResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
