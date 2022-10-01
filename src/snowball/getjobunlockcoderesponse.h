// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBUNLOCKCODERESPONSE_H
#define QTAWS_GETJOBUNLOCKCODERESPONSE_H

#include "snowballresponse.h"
#include "getjobunlockcoderequest.h"

namespace QtAws {
namespace Snowball {

class GetJobUnlockCodeResponsePrivate;

class QTAWSSNOWBALL_EXPORT GetJobUnlockCodeResponse : public SnowballResponse {
    Q_OBJECT

public:
    GetJobUnlockCodeResponse(const GetJobUnlockCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobUnlockCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobUnlockCodeResponse)
    Q_DISABLE_COPY(GetJobUnlockCodeResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
