// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVESKILLRESPONSE_H
#define QTAWS_APPROVESKILLRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "approveskillrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ApproveSkillResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ApproveSkillResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ApproveSkillResponse(const ApproveSkillRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ApproveSkillRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApproveSkillResponse)
    Q_DISABLE_COPY(ApproveSkillResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
