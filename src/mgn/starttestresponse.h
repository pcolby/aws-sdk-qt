// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTESTRESPONSE_H
#define QTAWS_STARTTESTRESPONSE_H

#include "mgnresponse.h"
#include "starttestrequest.h"

namespace QtAws {
namespace Mgn {

class StartTestResponsePrivate;

class QTAWSMGN_EXPORT StartTestResponse : public MgnResponse {
    Q_OBJECT

public:
    StartTestResponse(const StartTestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTestResponse)
    Q_DISABLE_COPY(StartTestResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
