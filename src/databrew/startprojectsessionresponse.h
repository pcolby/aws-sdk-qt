// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTSESSIONRESPONSE_H
#define QTAWS_STARTPROJECTSESSIONRESPONSE_H

#include "databrewresponse.h"
#include "startprojectsessionrequest.h"

namespace QtAws {
namespace DataBrew {

class StartProjectSessionResponsePrivate;

class QTAWSDATABREW_EXPORT StartProjectSessionResponse : public DataBrewResponse {
    Q_OBJECT

public:
    StartProjectSessionResponse(const StartProjectSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartProjectSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartProjectSessionResponse)
    Q_DISABLE_COPY(StartProjectSessionResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
