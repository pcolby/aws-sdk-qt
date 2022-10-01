// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCUTOVERRESPONSE_H
#define QTAWS_STARTCUTOVERRESPONSE_H

#include "mgnresponse.h"
#include "startcutoverrequest.h"

namespace QtAws {
namespace Mgn {

class StartCutoverResponsePrivate;

class QTAWSMGN_EXPORT StartCutoverResponse : public MgnResponse {
    Q_OBJECT

public:
    StartCutoverResponse(const StartCutoverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCutoverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCutoverResponse)
    Q_DISABLE_COPY(StartCutoverResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
