// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALENDARSTATERESPONSE_H
#define QTAWS_GETCALENDARSTATERESPONSE_H

#include "ssmresponse.h"
#include "getcalendarstaterequest.h"

namespace QtAws {
namespace Ssm {

class GetCalendarStateResponsePrivate;

class QTAWSSSM_EXPORT GetCalendarStateResponse : public SsmResponse {
    Q_OBJECT

public:
    GetCalendarStateResponse(const GetCalendarStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCalendarStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCalendarStateResponse)
    Q_DISABLE_COPY(GetCalendarStateResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
