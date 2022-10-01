// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEULARESPONSE_H
#define QTAWS_GETEULARESPONSE_H

#include "nimbleresponse.h"
#include "geteularequest.h"

namespace QtAws {
namespace Nimble {

class GetEulaResponsePrivate;

class QTAWSNIMBLE_EXPORT GetEulaResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetEulaResponse(const GetEulaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEulaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEulaResponse)
    Q_DISABLE_COPY(GetEulaResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
