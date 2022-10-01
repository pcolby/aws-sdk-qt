// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONRESPONSE_H
#define QTAWS_GETACTIONRESPONSE_H

#include "fisresponse.h"
#include "getactionrequest.h"

namespace QtAws {
namespace Fis {

class GetActionResponsePrivate;

class QTAWSFIS_EXPORT GetActionResponse : public FisResponse {
    Q_OBJECT

public:
    GetActionResponse(const GetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActionResponse)
    Q_DISABLE_COPY(GetActionResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
