// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERESPONSE_H
#define QTAWS_DISABLERESPONSE_H

#include "inspector2response.h"
#include "disablerequest.h"

namespace QtAws {
namespace Inspector2 {

class DisableResponsePrivate;

class QTAWSINSPECTOR2_EXPORT DisableResponse : public Inspector2Response {
    Q_OBJECT

public:
    DisableResponse(const DisableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableResponse)
    Q_DISABLE_COPY(DisableResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
