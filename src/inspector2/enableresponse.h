// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERESPONSE_H
#define QTAWS_ENABLERESPONSE_H

#include "inspector2response.h"
#include "enablerequest.h"

namespace QtAws {
namespace Inspector2 {

class EnableResponsePrivate;

class QTAWSINSPECTOR2_EXPORT EnableResponse : public Inspector2Response {
    Q_OBJECT

public:
    EnableResponse(const EnableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableResponse)
    Q_DISABLE_COPY(EnableResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
