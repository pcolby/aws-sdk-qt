// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERFROMWORKMAILRESPONSE_H
#define QTAWS_DEREGISTERFROMWORKMAILRESPONSE_H

#include "workmailresponse.h"
#include "deregisterfromworkmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterFromWorkMailResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeregisterFromWorkMailResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeregisterFromWorkMailResponse(const DeregisterFromWorkMailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterFromWorkMailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterFromWorkMailResponse)
    Q_DISABLE_COPY(DeregisterFromWorkMailResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
