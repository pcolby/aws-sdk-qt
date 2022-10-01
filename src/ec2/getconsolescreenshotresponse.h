// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLESCREENSHOTRESPONSE_H
#define QTAWS_GETCONSOLESCREENSHOTRESPONSE_H

#include "ec2response.h"
#include "getconsolescreenshotrequest.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleScreenshotResponsePrivate;

class QTAWSEC2_EXPORT GetConsoleScreenshotResponse : public Ec2Response {
    Q_OBJECT

public:
    GetConsoleScreenshotResponse(const GetConsoleScreenshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConsoleScreenshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConsoleScreenshotResponse)
    Q_DISABLE_COPY(GetConsoleScreenshotResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
