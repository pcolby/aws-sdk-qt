// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSRESPONSE_H
#define QTAWS_GETINSTANCEACCESSRESPONSE_H

#include "gameliftresponse.h"
#include "getinstanceaccessrequest.h"

namespace QtAws {
namespace GameLift {

class GetInstanceAccessResponsePrivate;

class QTAWSGAMELIFT_EXPORT GetInstanceAccessResponse : public GameLiftResponse {
    Q_OBJECT

public:
    GetInstanceAccessResponse(const GetInstanceAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceAccessResponse)
    Q_DISABLE_COPY(GetInstanceAccessResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
